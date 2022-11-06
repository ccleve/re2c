/* Generated by re2c */
#line 1 "encodings/unicode_group_Cf_8_encoding_policy_substitute.re"
// re2c $INPUT -o $OUTPUT -8 --encoding-policy substitute
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Cf:
	
#line 14 "encodings/unicode_group_Cf_8_encoding_policy_substitute.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case 0xC2: goto yy3;
		case 0xD8: goto yy4;
		case 0xDB: goto yy5;
		case 0xDC: goto yy6;
		case 0xE0: goto yy7;
		case 0xE1: goto yy8;
		case 0xE2: goto yy9;
		case 0xEF: goto yy10;
		case 0xF0: goto yy11;
		case 0xF3: goto yy12;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
#line 14 "encodings/unicode_group_Cf_8_encoding_policy_substitute.re"
	{ return YYCURSOR == limit; }
#line 36 "encodings/unicode_group_Cf_8_encoding_policy_substitute.c"
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAD: goto yy13;
		default: goto yy2;
	}
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x9C: goto yy13;
		default: goto yy2;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9D: goto yy13;
		default: goto yy2;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8F: goto yy13;
		default: goto yy2;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xA3: goto yy14;
		default: goto yy2;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xA0: goto yy16;
		default: goto yy2;
	}
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x80: goto yy17;
		case 0x81: goto yy18;
		default: goto yy2;
	}
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xBB: goto yy19;
		case 0xBF: goto yy20;
		default: goto yy2;
	}
yy11:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x91: goto yy21;
		case 0x93: goto yy22;
		case 0x9B: goto yy23;
		case 0x9D: goto yy24;
		default: goto yy2;
	}
yy12:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xA0: goto yy25;
		default: goto yy2;
	}
yy13:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Cf_8_encoding_policy_substitute.re"
	{ goto Cf; }
#line 112 "encodings/unicode_group_Cf_8_encoding_policy_substitute.c"
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA2: goto yy13;
		default: goto yy15;
	}
yy15:
	YYCURSOR = YYMARKER;
	goto yy2;
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8E: goto yy13;
		default: goto yy15;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE: goto yy13;
		default: goto yy15;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF: goto yy13;
		default: goto yy15;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBF: goto yy13;
		default: goto yy15;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB9:
		case 0xBA:
		case 0xBB: goto yy13;
		default: goto yy15;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x82: goto yy26;
		case 0x83: goto yy27;
		default: goto yy15;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90: goto yy28;
		default: goto yy15;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB2: goto yy29;
		default: goto yy15;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x85: goto yy30;
		default: goto yy15;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80: goto yy31;
		case 0x81: goto yy32;
		default: goto yy15;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBD: goto yy13;
		default: goto yy15;
	}
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8D: goto yy13;
		default: goto yy15;
	}
yy28:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8: goto yy13;
		default: goto yy15;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3: goto yy13;
		default: goto yy15;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA: goto yy13;
		default: goto yy15;
	}
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy13;
		default: goto yy15;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy13;
		default: goto yy15;
	}
}
#line 15 "encodings/unicode_group_Cf_8_encoding_policy_substitute.re"

}
static const unsigned int chars_Cf [] = {0xad,0xad,  0x600,0x605,  0x61c,0x61c,  0x6dd,0x6dd,  0x70f,0x70f,  0x8e2,0x8e2,  0x180e,0x180e,  0x200b,0x200f,  0x202a,0x202e,  0x2060,0x2064,  0x2066,0x206f,  0xfeff,0xfeff,  0xfff9,0xfffb,  0x110bd,0x110bd,  0x110cd,0x110cd,  0x13430,0x13438,  0x1bca0,0x1bca3,  0x1d173,0x1d17a,  0xe0001,0xe0001,  0xe0020,0xe007f,  0x0,0x0};
static unsigned int encode_utf8 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count - 2; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			s += re2c::utf8::rune_to_bytes (s, j);
	re2c::utf8::rune_to_bytes (s, ranges[ranges_count - 1]);
	return s - s_start + 1;
}

int main ()
{
	unsigned int * buffer_Cf = new unsigned int [648];
	YYCTYPE * s = (YYCTYPE *) buffer_Cf;
	unsigned int buffer_len = encode_utf8 (chars_Cf, sizeof (chars_Cf) / sizeof (unsigned int), buffer_Cf);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Cf[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Cf' failed\n");
	delete [] buffer_Cf;
	return 0;
}
