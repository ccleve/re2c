#ifndef _RE2C_CODEGEN_OUTPUT_
#define _RE2C_CODEGEN_OUTPUT_

#include <stdint.h>
#include <set>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <memory>

#include "src/constants.h"
#include "src/codegen/code.h"
#include "src/dfa/tcmd.h"
#include "src/msg/location.h"
#include "src/util/allocator.h"
#include "src/util/attribute.h"

namespace re2c {

// forward decls
class Msg;
struct Adfa;
struct Opt;
struct opt_t;
struct OutputBlock;
struct State;
using dfas_t = std::vector<std::unique_ptr<Adfa>>;

class Scratchbuf {
    OutAllocator& alc;
    std::ostringstream os;

  public:
    explicit Scratchbuf(OutAllocator& alc): alc(alc), os() {}
    bool empty() const { return os.str().empty(); }
    std::ostringstream& stream() { return os; }
    Scratchbuf& i32(int32_t u) { os << u; return *this; }
    Scratchbuf& u32(uint32_t u) { os << u; return *this; }
    Scratchbuf& u64(uint64_t u) { os << u; return *this; }
    Scratchbuf& str(const std::string& s) { os << s; return *this; }
    Scratchbuf& cstr(const char* s) { os << s; return *this; }
    Scratchbuf& yybm_char(uint32_t u, const opt_t* opts, int width);

    Scratchbuf& u32_width(uint32_t u, int width);
    Scratchbuf& exact_uint(size_t width);
    const char* flush();

    Scratchbuf& unchecked_label(const Label& l);
    Scratchbuf& label(const Label& l);
};

using blocks_t = std::vector<OutputBlock*>;
using blocks_citer_t = blocks_t::const_iterator;
using tagnames_t = std::set<std::string>;

struct CodegenCtxGlobal {
    OutAllocator& allocator;
    Scratchbuf& scratchbuf;
    Msg& msg;
    const opt_t* opts;
    const blocks_t& cblocks;
    const blocks_t& hblocks;
    const blocks_t* pblocks;
    mutable blocks_t tmpblocks; // temporary buffer for block lists in directives
    const bool warn_cond_ord;
};

struct CodegenCtxPass1 {
    const CodegenCtxGlobal* global; // global part
    const OutputBlock* block;       // block-local part
};

struct CodegenCtxPass2 {
    OutAllocator& allocator;
    Scratchbuf& scratchbuf;
    const opt_t* opts;
};

struct RenderContext {
    std::ostringstream& os;
    const opt_t* opts;
    const Msg& msg;
    uint32_t ind;
    const char* file;
    uint32_t& line;
};

struct OutputFragment {
    Code* code;
    uint32_t indent;
};

struct StartCond {
    std::string name;
    uint32_t number;
};
using StartConds = std::vector<StartCond>;

using storable_states_t = std::map<uint32_t, CodeList*>;

struct OutputBlock {
    InputBlock kind;
    std::string name;
    const loc_t loc;
    std::vector<OutputFragment> fragments;
    bool used_yyaccept;
    bool have_user_code;
    StartConds conds;
    tagnames_t stags;
    tagnames_t mtags;
    const opt_t* opts;

    size_t max_fill;   // YYMAXFILL
    size_t max_nmatch; // YYMAXNMATCH

    // Used in the state switch (with `-f --storable-state` option).
    Label* start_label;          // label of the DFA start state
    uint32_t fill_index;         // next free index in YYFILL state enumeration
    uint32_t fill_state;         // index of the most recent YYFILL state
    storable_states_t fill_goto; // transitions to YYFILL states

    OutputBlock(InputBlock kind, const std::string& name, const loc_t& loc);
    ~OutputBlock();
    FORBID_COPY(OutputBlock);
};

struct Output {
    blocks_t cblocks;  // .c file
    blocks_t hblocks;  // .h file
    blocks_t* pblocks; // selector
    uint32_t label_counter;
    bool state_goto;
    bool cond_enum_autogen; // true unless an explicit `types:re2c` directive is used
    bool cond_goto;
    bool warn_condition_order;
    bool need_header;
    bool done_mtag_defs;
    Msg& msg;
    std::set<std::string> skeletons;
    OutAllocator allocator;
    Scratchbuf scratchbuf;

    // YYFILL state index accumulated for all non-reuse blocks
    uint32_t total_fill_index;

    // "final" options accumulated for all non-reuse blocks
    const opt_t* total_opts;

    explicit Output(Msg& msg);
    ~Output();
    OutputBlock& block();
    bool open();
    Ret new_block(Opt& opts, InputBlock kind, std::string name, const loc_t& loc) NODISCARD;
    void gather_info_from_block();
    void header_mode(bool on);
    bool in_header() const;
    void wraw(const uint8_t* s, const uint8_t* e, bool newline = false);
    void gen_version_time();
    void wdelay_stmt(uint32_t ind, Code* code);
    Ret gen_prolog(Opt& opts, const loc_t& loc);
    void gen_epilog();
    Ret emit() NODISCARD;
    Ret emit_blocks(const std::string& fname, const CodegenCtxGlobal& globalctx) NODISCARD;
    FORBID_COPY(Output);
};

void init_go(CodeGo* go);
void code_go(OutAllocator& alc, const Adfa& dfa, const opt_t* opts, State* from);
State* fallback_state_with_eof_rule(
        const Adfa& dfa, const opt_t* opts, const State* state, tcid_t* ptags);
CodeBmState* find_bitmap(const CodeBitmap* bitmap, const CodeGo* go, const State* s);
void insert_bitmap(OutAllocator& alc, CodeBitmap* bitmap, const CodeGo* go, const State* s);
std::string bitmap_name(const opt_t* opts, const std::string& cond);
CodeList* gen_bitmap(Output& output, const CodeBitmap* bitmap, const std::string& cond);

void gen_go(Output& output, const Adfa& dfa, const CodeGo* go, const State* from, CodeList* stmts);
void gen_tags(Scratchbuf& buf, const opt_t* opts, Code* code, const tagnames_t& tags);
void emit_action(Output& output, const Adfa& dfa, const State* s, CodeList* stmts);
void gen_settags(Output& output, CodeList* tag_actions, const Adfa& dfa, tcid_t tcid);
void gen_goto(
        Output& output, const Adfa& dfa, CodeList* stmts, const State* from, const CodeJump& jump);
void gen_code(Output& output, dfas_t& dfas);
void gen_dfa_as_blocks_with_labels(Output& output, const Adfa& dfa, CodeList* stmts);
void gen_dfa_as_switch_cases(Output& output, Adfa& dfa, CodeCases* cases);
void wrap_dfas_in_loop_switch(Output& output, CodeList* stmts, CodeCases* cases);

Ret expand_pass_1(CodegenCtxPass1& ctx, Code* code) NODISCARD;
void expand_pass_2(CodegenCtxPass2& ctx, Code* code);
void remove_empty(CodegenCtxPass2& ctx, Code* code);
void combine(CodegenCtxPass2& ctx, Code* code);
void render(RenderContext& rctx, const Code* code);

bool consume(const State* s);
void expand_fintags(const Tag& tag, std::vector<std::string>& fintags);
std::string vartag_name(
        tagver_t ver, const std::string& prefix, const std::set<tagver_t>& mtagvers);
std::string vartag_expr(tagver_t ver, const opt_t* opts, const std::set<tagver_t>& mtagvers);
void gen_peek_expr(std::ostream& os, const opt_t* opts);
void gen_yydebug(Output& output, const Label* label, CodeList* stmts);

} // namespace re2c

#endif // _RE2C_CODEGEN_OUTPUT_
