#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <valarray>

#include "src/dfa/dfa.h"
#include "src/dfa/dump.h"
#include "src/dfa/find_state.h"
#include "src/dfa/tagpool.h"
#include "src/dfa/tcmd.h"
#include "src/nfa/nfa.h"
#include "src/re/rule.h"
#include "src/util/hash32.h"

namespace re2c
{

struct kernel_eq_t
{
	Tagpool &tagpool;
	const std::vector<Tag> &tags;

	bool operator()(const kernel_t *, const kernel_t *) const;
};


static void reserve_buffers(kernel_buffers_t &, allocator_t &, tagver_t, size_t);
static kernel_t *make_new_kernel(size_t, allocator_t &);
static kernel_t *make_kernel_copy(const kernel_t *, allocator_t &);


kernel_buffers_t::kernel_buffers_t(allocator_t &alc)
	: maxsize(0) // usually ranges from one to some twenty
	, kernel(make_new_kernel(maxsize, alc))
	, cap(0)
	, max(0)
	, memory(NULL)
	, x2y(NULL)
	, y2x(NULL)
	, x2t(NULL)
	, indegree(NULL)
	, actnext(NULL)
	, actlhs(NULL)
{}


kernels_t::kernels_t(Tagpool &tagp, tcpool_t &tcp, const std::vector<Tag> &ts)
	: lookup()
	, tagpool(tagp)
	, tcpool(tcp)
	, tags(ts)
	, buffers(tagp.alc)
	, pacts(NULL)
{}


kernel_t *make_new_kernel(size_t size, allocator_t &alc)
{
	kernel_t *k = alc.alloct<kernel_t>(1);
	k->size = size;
	k->prectbl = NULL;
	k->state = alc.alloct<nfa_state_t*>(size);
	k->tvers = alc.alloct<size_t>(size);
	k->tlook = alc.alloct<hidx_t>(size);
	return k;
}


kernel_t *make_kernel_copy(const kernel_t *kernel, allocator_t &alc)
{
	const size_t n = kernel->size;

	kernel_t *k = make_new_kernel(n, alc);

	memcpy(k->state, kernel->state, n * sizeof(void*));
	memcpy(k->tvers, kernel->tvers, n * sizeof(size_t));
	memcpy(k->tlook, kernel->tlook, n * sizeof(hidx_t));

	prectable_t *ptbl = NULL;
	if (kernel->prectbl) {
		ptbl = alc.alloct<prectable_t>(n * n);
		memcpy(ptbl, kernel->prectbl, n * n * sizeof(prectable_t));
	}
	k->prectbl = ptbl;

	return k;
}


void reserve_buffers(kernel_buffers_t &kbufs, allocator_t &alc,
	tagver_t maxver, size_t maxkern)
{
	if (kbufs.maxsize < maxkern) {
		kbufs.maxsize = maxkern * 2; // in advance
		kbufs.kernel = make_new_kernel(kbufs.maxsize, alc);
	}

	// +1 to ensure max tag version is not forgotten in loops
	kbufs.max = maxver + 1;
	if (kbufs.cap < kbufs.max) {
		kbufs.cap = kbufs.max * 2; // in advance

		const size_t
			n = static_cast<size_t>(kbufs.cap),
			m = 2 * n + 1,
			sz_x2y = 2 * m * sizeof(tagver_t),
			sz_x2t = m * sizeof(size_t),
			sz_actnext = n * sizeof(tcmd_t*),
			sz_actlhs = n * sizeof(tagver_t),
			sz_indeg = n * sizeof(uint32_t);

		char *p = alc.alloct<char>(sz_x2y + sz_x2t + sz_actnext + sz_actlhs + sz_indeg);
		kbufs.memory = p;

		// point to the center (zero index) of each buffer
		// indexes in range [-N .. N] must be valid, where N is capacity
		kbufs.x2y = reinterpret_cast<tagver_t*>(p) + n;
		kbufs.y2x = kbufs.x2y + m;
		p += sz_x2y;
		kbufs.x2t = reinterpret_cast<size_t*>(p) + n;
		p += sz_x2t;
		kbufs.actnext = reinterpret_cast<tcmd_t**>(p);
		p += sz_actnext;
		kbufs.actlhs = reinterpret_cast<tagver_t*>(p);
		p += sz_actlhs;
		kbufs.indegree = reinterpret_cast<uint32_t*>(p);
	}
}


static bool equal_lookahead_tags(const kernel_t *x, const kernel_t *y,
	Tagpool &tagpool, const std::vector<Tag> &tags)
{
	if (memcmp(x->tlook, y->tlook, x->size * sizeof(hidx_t)) == 0) {
		return true;
	}
	tagtree_t &h = tagpool.history;
	for (size_t i = 0; i < x->size; ++i) {
		const hidx_t xl = x->tlook[i], yl = y->tlook[i];
		for (size_t t = 0; t < tagpool.ntags; ++t) {
			if (history(tags[t])) {
				// compare full tag sequences
				if (h.compare_reversed(xl, yl, t) != 0) return false;
			} else {
				// compare only the last pair of tags
				if (h.last(xl, t) != h.last(yl, t)) return false;
			}
		}
	}
	return true;
}


bool kernel_eq_t::operator()(const kernel_t *x, const kernel_t *y) const
{
	// check that kernel sizes, NFA states, tags versions,
	// lookahead tags and precedence table coincide
	const size_t n = x->size;
	return n == y->size
		&& memcmp(x->state, y->state, n * sizeof(void*)) == 0
		&& memcmp(x->tvers, y->tvers, n * sizeof(size_t)) == 0
		&& (!x->prectbl || memcmp(x->prectbl, y->prectbl, n * n * sizeof(prectable_t)) == 0)
		&& equal_lookahead_tags(x, y, tagpool, tags);
}

/* note [mapping ignores items with lookahead tags]
 *
 * Consider two items X and Y being mapped.
 *
 * If tag T belongs to lookahead tags of item X, then all
 * outgoing transitions from item X update T. Which means
 * that it doesn't matter what particular version T has in X:
 * whatever version it has, it will be overwritten by any
 * outgoing transition.
 *
 * Note that lookahead tags are identical for both items
 * X and Y, because we only try to map DFA states with
 * identical lookahead tags.
 */

/* note [save(X), copy(Y,X) optimization]
 *
 * save(X) command followed by a copy(Y,X) command can be optimized to
 * save(Y). This helps reduce the number commands and versions (new version
 * X is gone), but what is more important, it allows to put copy commands
 * in front of save commands. This order is necessary when it comes to
 * fallback commands.
 *
 * Note that in case of injective mapping there may be more than one copy
 * command matching the same save command: save(X), copy(Y,X), copy(Z,X).
 * In this case save command must be replicated for each copy command:
 * save(Y), save(Z).
 *
 * For each save(X) command there must be at least one copy(Y,X) command
 * (exactly one case of bijective mapping). This is because X version in
 * save(X) command must be a new version which cannot occur in the older
 * DFA state. Thus all save commands are transformed (maybe replicated) by
 * copy commands, and some copy commands are erased by save commands.
 *
 * This optimization is applied after checking priority violation, so it
 * cannot affect the check.
*/

bool kernels_t::operator()(const kernel_t *x, const kernel_t *y)
{
	// check that kernel sizes, NFA states lookahead tags
	// and precedence table coincide (versions might differ)
	const size_t n = x->size;
	const bool compatible = n == y->size
		&& memcmp(x->state, y->state, n * sizeof(void*)) == 0
		&& (!x->prectbl || memcmp(x->prectbl, y->prectbl, n * n * sizeof(prectable_t)) == 0)
		&& equal_lookahead_tags(x, y, tagpool, tags);
	if (!compatible) return false;

	tagver_t *x2y = buffers.x2y, *y2x = buffers.y2x, max = buffers.max;
	size_t *x2t = buffers.x2t;

	// map tag versions of one kernel to that of another
	// and check that lookahead versions (if any) coincide
	const size_t ntag = tagpool.ntags;
	std::fill(x2y - max, x2y + max, TAGVER_ZERO);
	std::fill(y2x - max, y2x + max, TAGVER_ZERO);
	for (size_t i = 0; i < n; ++i) {
		const tagver_t
			*xvs = tagpool[x->tvers[i]],
			*yvs = tagpool[y->tvers[i]];
		const hidx_t xl = x->tlook[i];

		for (size_t t = 0; t < ntag; ++t) {
			// see note [mapping ignores items with lookahead tags]
			if (tagpool.history.last(xl, t) != TAGVER_ZERO
				&& !history(tags[t])) continue;

			const tagver_t xv = xvs[t], yv = yvs[t];
			tagver_t &xv0 = y2x[yv], &yv0 = x2y[xv];

			if (yv0 == TAGVER_ZERO && xv0 == TAGVER_ZERO) {
				xv0 = xv;
				yv0 = yv;
				x2t[xv] = t;
			} else if (yv != yv0 || xv != xv0) {
				return false;
			}
		}
	}

	// we have bijective mapping; now try to create list of commands
	tcmd_t **actnext = buffers.actnext, *a, **pa, *copy = NULL;
	tagver_t *actlhs = buffers.actlhs;

	// backup 'save' commands: if topsort finds cycles, this mapping
	// will be rejected and we'll have to revert all changes
	size_t nact = 0;
	for (a = *pacts; a; a = a->next) {
		actnext[nact] = a;
		actlhs[nact] = a->lhs;
		++nact;
	}

	// fix LHS of 'save' commands to reuse old version
	// see note [save(X), copy(Y,X) optimization]
	for (a = *pacts; a; a = a->next) {
		const tagver_t
			yv = a->lhs * (a->history[0] == TAGVER_BOTTOM ? -1 : 1),
			xv = y2x[yv];
		a->lhs = abs(xv);
		y2x[yv] = x2y[xv] = TAGVER_ZERO;
	}

	// create 'copy' commands
	for (tagver_t xv = -max; xv < max; ++xv) {
		const tagver_t yv = x2y[xv], axv = abs(xv), ayv = abs(yv);
		if (yv != TAGVER_ZERO && xv != yv && !fixed(tags[x2t[xv]])) {
			assert(axv != ayv);
			copy = tcpool.make_copy(copy, axv, ayv);
		}
	}

	// join 'copy' and 'save' commands
	for (pa = &copy; (a = *pa); pa = &a->next);
	*pa = *pacts;
	*pacts = copy;

	// see note [topological ordering of copy commands]
	const bool nontrivial_cycles = tcmd_t::topsort(pacts, buffers.indegree);

	// in case of cycles restore 'save' commands and fail
	if (nontrivial_cycles) {
		pa = pacts;
		for (size_t i = 0; i < nact; ++i) {
			*pa = a = actnext[i];
			a->lhs = actlhs[i];
			pa = &a->next;
		}
		*pa = NULL;
	}

	return !nontrivial_cycles;
}

/* note [bijective mappings]
 *
 * Suppose we have just constructed a new DFA state Y and want to map it
 * to an existing DFA state X. States must have identical sets of NFA
 * substates and identical sets of lookahead tags for each substate.
 * Furtermore, there must be bijective mapping between versions of X and Y
 * and this mapping must preserve version order (respect priorities).
 *
 * Bijective mappings have a nice property: there is only one possible state
 * X to which Y can be mapped. Indeed, if there was another state Z that
 * can be bijectively mapped to Y preserving priorities, then Z itself can
 * be mapped to X: both (1) and (2) are symmetrical in case of bijection
 * and the relation is transitive. So the existence of Z is a contradiction.
 *
 * In principle, non-bijective mappings are also possible if the new state
 * is less versatile than the old one (surjection from X to Y). However,
 * non-bijective mappings lack the 'unique counterpart' property and need
 * more complex analysis (and are not so useful after all), so we drop them.
 */

kernels_t::result_t kernels_t::insert(const closure_t &clos,
	tcmd_t *acts, tagver_t maxver, const prectable_t *prectbl)
{
	const size_t nkern = clos.size();
	size_t x = dfa_t::NIL;

	// empty closure corresponds to default state
	if (nkern == 0) return result_t(x, NULL, false);

	// resize buffer if closure is too large
	reserve_buffers(buffers, tagpool.alc, maxver, nkern);

	// copy closure to buffer kernel and find its normal form
	kernel_t *k = buffers.kernel;
	k->size = nkern;
	k->prectbl = prectbl;
	for (size_t i = 0; i < nkern; ++i) {
		const clos_t &c = clos[i];
		k->state[i] = c.state;
		k->tvers[i] = c.tvers;
		k->tlook[i] = c.tlook;
	}

	// get kernel hash
	uint32_t hash = static_cast<uint32_t>(nkern); // seed
	hash = hash32(hash, k->state, nkern * sizeof(void*));
	if (prectbl) {
		hash = hash32(hash, k->prectbl, nkern * nkern * sizeof(prectable_t));
	}

	// try to find identical kernel
	kernel_eq_t cmp_eq = {tagpool, tags};
	x = lookup.find_with(hash, k, cmp_eq);
	if (x != index_t::NIL) return result_t(x, acts, false);

	// else try to find mappable kernel
	// see note [bijective mappings]
	this->pacts = &acts;
	x = lookup.find_with(hash, k, *this);
	if (x != index_t::NIL) return result_t(x, acts, false);

	// otherwise add new kernel
	x = lookup.push(hash, make_kernel_copy(k, tagpool.alc));
	return result_t(x, acts, true);
}

static tcmd_t *finalizer(const clos_t &clos, size_t ridx,
	dfa_t &dfa, const Tagpool &tagpool, const std::vector<Tag> &tags)
{
	tcpool_t &tcpool = dfa.tcpool;
	const Rule &rule = dfa.rules[ridx];
	const tagver_t *vers = tagpool[clos.tvers];
	const tagtree_t &hist = tagpool.history;
	const hidx_t look = clos.tlook;
	tcmd_t *copy = NULL, *save = NULL, **p;

	for (size_t t = rule.ltag; t < rule.htag; ++t) {
		const Tag &tag = tags[t];
		if (fixed(tag)) continue;

		const tagver_t v = abs(vers[t]), l = hist.last(look, t);
		tagver_t &f = dfa.finvers[t];
		if (l == TAGVER_ZERO) {
			copy = tcpool.make_copy(copy, f, v);
		} else if (history(tag)) {
			save = tcpool.make_add(save, f, v, hist, look, t);
		} else {
			save = tcpool.make_set(save, f, l);
		}
	}

	// join 'copy' and 'save' commands
	for (p = &copy; *p; p = &(*p)->next);
	*p = save;

	return copy;
}

void find_state(dfa_t &dfa, size_t state, size_t symbol, kernels_t &kernels,
	const closure_t &closure, tcmd_t *acts, dump_dfa_t &dump, const prectable_t *prectbl)
{
	const kernels_t::result_t
		result = kernels.insert(closure, acts, dfa.maxtagver, prectbl);

	if (result.isnew) {
		// create new DFA state
		dfa_state_t *t = new dfa_state_t(dfa.nchars);
		dfa.states.push_back(t);

		// check if the new state is final
		// see note [at most one final item per closure]
		cclositer_t c1 = closure.begin(), c2 = closure.end(),
			c = std::find_if(c1, c2, clos_t::fin);
		if (c != c2) {
			t->rule = c->state->rule;
			t->tcmd[dfa.nchars] = finalizer(*c, t->rule, dfa,
				kernels.tagpool, kernels.tags);
			dump.final(result.state, c->state);
		}
	}

	if (state == dfa_t::NIL) { // initial state
		dfa.tcmd0 = result.cmd;
		dump.state0(closure);
	} else {
		dfa_state_t *s = dfa.states[state];
		s->arcs[symbol] = result.state;
		s->tcmd[symbol] = result.cmd;
		dump.state(closure, state, symbol, result.isnew);
	}
}

} // namespace re2c
