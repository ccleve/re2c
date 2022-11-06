/* Generated by re2c */
#line 1 "encodings/unicode_group_Po_8_encoding_policy_substitute.re"
// re2c $INPUT -o $OUTPUT -8 --encoding-policy substitute
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Po:
	
#line 14 "encodings/unicode_group_Po_8_encoding_policy_substitute.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case '!':
		case '"':
		case '#':
		case '%':
		case '&':
		case '\'':
		case '*':
		case ',':
		case '.':
		case '/':
		case ':':
		case ';':
		case '?':
		case '@':
		case '\\': goto yy3;
		case 0xC2: goto yy4;
		case 0xCD: goto yy5;
		case 0xCE: goto yy6;
		case 0xD5: goto yy7;
		case 0xD6: goto yy8;
		case 0xD7: goto yy9;
		case 0xD8: goto yy10;
		case 0xD9: goto yy11;
		case 0xDB: goto yy12;
		case 0xDC: goto yy13;
		case 0xDF: goto yy14;
		case 0xE0: goto yy15;
		case 0xE1: goto yy16;
		case 0xE2: goto yy17;
		case 0xE3: goto yy18;
		case 0xEA: goto yy19;
		case 0xEF: goto yy20;
		case 0xF0: goto yy21;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
#line 14 "encodings/unicode_group_Po_8_encoding_policy_substitute.re"
	{ return YYCURSOR == limit; }
#line 59 "encodings/unicode_group_Po_8_encoding_policy_substitute.c"
yy3:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Po_8_encoding_policy_substitute.re"
	{ goto Po; }
#line 64 "encodings/unicode_group_Po_8_encoding_policy_substitute.c"
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA1:
		case 0xA7:
		case 0xB6:
		case 0xB7:
		case 0xBF: goto yy3;
		default: goto yy2;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBE: goto yy3;
		default: goto yy2;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x87: goto yy3;
		default: goto yy2;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F: goto yy3;
		default: goto yy2;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x89: goto yy3;
		default: goto yy2;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x83:
		case 0x86:
		case 0xB3:
		case 0xB4: goto yy3;
		default: goto yy2;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x89:
		case 0x8A:
		case 0x8C:
		case 0x8D:
		case 0x9B:
		case 0x9E:
		case 0x9F: goto yy3;
		default: goto yy2;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD: goto yy3;
		default: goto yy2;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x94: goto yy3;
		default: goto yy2;
	}
yy13:
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
		case 0x8D: goto yy3;
		default: goto yy2;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB7:
		case 0xB8:
		case 0xB9: goto yy3;
		default: goto yy2;
	}
yy15:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xA0: goto yy22;
		case 0xA1: goto yy24;
		case 0xA5: goto yy25;
		case 0xA7: goto yy26;
		case 0xA9: goto yy27;
		case 0xAB: goto yy28;
		case 0xB1: goto yy29;
		case 0xB2: goto yy30;
		case 0xB7: goto yy31;
		case 0xB9: goto yy32;
		case 0xBC: goto yy33;
		case 0xBE: goto yy34;
		case 0xBF: goto yy35;
		default: goto yy2;
	}
yy16:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x81: goto yy36;
		case 0x83: goto yy37;
		case 0x8D: goto yy38;
		case 0x99: goto yy39;
		case 0x9B: goto yy40;
		case 0x9C: goto yy41;
		case 0x9F: goto yy42;
		case 0xA0: goto yy43;
		case 0xA5: goto yy44;
		case 0xA8: goto yy45;
		case 0xAA: goto yy46;
		case 0xAD: goto yy47;
		case 0xAF: goto yy48;
		case 0xB0: goto yy49;
		case 0xB1: goto yy50;
		case 0xB3: goto yy51;
		default: goto yy2;
	}
yy17:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x80: goto yy52;
		case 0x81: goto yy53;
		case 0xB3: goto yy54;
		case 0xB5: goto yy28;
		case 0xB8: goto yy55;
		case 0xB9: goto yy56;
		default: goto yy2;
	}
yy18:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x80: goto yy57;
		case 0x83: goto yy37;
		default: goto yy2;
	}
yy19:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x93: goto yy50;
		case 0x98: goto yy58;
		case 0x99: goto yy59;
		case 0x9B: goto yy60;
		case 0xA1: goto yy61;
		case 0xA3: goto yy62;
		case 0xA4: goto yy63;
		case 0xA5: goto yy64;
		case 0xA7: goto yy65;
		case 0xA9: goto yy66;
		case 0xAB: goto yy67;
		case 0xAF: goto yy68;
		default: goto yy2;
	}
yy20:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xB8: goto yy69;
		case 0xB9: goto yy70;
		case 0xBC: goto yy71;
		case 0xBD: goto yy72;
		default: goto yy2;
	}
yy21:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x90: goto yy73;
		case 0x91: goto yy74;
		case 0x92: goto yy75;
		case 0x96: goto yy76;
		case 0x9B: goto yy77;
		case 0x9D: goto yy78;
		case 0x9E: goto yy79;
		default: goto yy2;
	}
yy22:
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
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE: goto yy3;
		default: goto yy23;
	}
yy23:
	YYCURSOR = YYMARKER;
	goto yy2;
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9E: goto yy3;
		default: goto yy23;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA4:
		case 0xA5:
		case 0xB0: goto yy3;
		default: goto yy23;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBD: goto yy3;
		default: goto yy23;
	}
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB6: goto yy3;
		default: goto yy23;
	}
yy28:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0: goto yy3;
		default: goto yy23;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB7: goto yy3;
		default: goto yy23;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x84: goto yy3;
		default: goto yy23;
	}
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB4: goto yy3;
		default: goto yy23;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8F:
		case 0x9A:
		case 0x9B: goto yy3;
		default: goto yy23;
	}
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
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
		case 0x94: goto yy3;
		default: goto yy23;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x85: goto yy3;
		default: goto yy23;
	}
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x99:
		case 0x9A: goto yy3;
		default: goto yy23;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F: goto yy3;
		default: goto yy23;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBB: goto yy3;
		default: goto yy23;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8: goto yy3;
		default: goto yy23;
	}
yy39:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAE: goto yy3;
		default: goto yy23;
	}
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAB:
		case 0xAC:
		case 0xAD: goto yy3;
		default: goto yy23;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB5:
		case 0xB6: goto yy3;
		default: goto yy23;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x98:
		case 0x99:
		case 0x9A: goto yy3;
		default: goto yy23;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A: goto yy3;
		default: goto yy23;
	}
yy44:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x84:
		case 0x85: goto yy3;
		default: goto yy23;
	}
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9E:
		case 0x9F: goto yy3;
		default: goto yy23;
	}
yy46:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD: goto yy3;
		default: goto yy23;
	}
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0: goto yy3;
		default: goto yy23;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy23;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy23;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy23;
	}
yy51:
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
		case 0x93: goto yy3;
		default: goto yy23;
	}
yy52:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x96:
		case 0x97:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE: goto yy3;
		default: goto yy23;
	}
yy53:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
		case 0x82:
		case 0x83:
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
		case 0x93:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E: goto yy3;
		default: goto yy23;
	}
yy54:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy23;
	}
yy55:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x8B:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x98:
		case 0x99:
		case 0x9B:
		case 0x9E:
		case 0x9F:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
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
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy23;
	}
yy56:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
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
		case 0x8F: goto yy3;
		default: goto yy23;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
		case 0x82:
		case 0x83:
		case 0xBD: goto yy3;
		default: goto yy23;
	}
yy58:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8D:
		case 0x8E:
		case 0x8F: goto yy3;
		default: goto yy23;
	}
yy59:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB3:
		case 0xBE: goto yy3;
		default: goto yy23;
	}
yy60:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7: goto yy3;
		default: goto yy23;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7: goto yy3;
		default: goto yy23;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8E:
		case 0x8F:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBC: goto yy3;
		default: goto yy23;
	}
yy63:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAE:
		case 0xAF: goto yy3;
		default: goto yy23;
	}
yy64:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9F: goto yy3;
		default: goto yy23;
	}
yy65:
	yych = *++YYCURSOR;
	switch (yych) {
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
		case 0x9E:
		case 0x9F: goto yy3;
		default: goto yy23;
	}
yy66:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F: goto yy3;
		default: goto yy23;
	}
yy67:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9E:
		case 0x9F:
		case 0xB0:
		case 0xB1: goto yy3;
		default: goto yy23;
	}
yy68:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAB: goto yy3;
		default: goto yy23;
	}
yy69:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x99:
		case 0xB0: goto yy3;
		default: goto yy23;
	}
yy70:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x85:
		case 0x86:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA8:
		case 0xAA:
		case 0xAB: goto yy3;
		default: goto yy23;
	}
yy71:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x8A:
		case 0x8C:
		case 0x8E:
		case 0x8F:
		case 0x9A:
		case 0x9B:
		case 0x9F:
		case 0xA0:
		case 0xBC: goto yy3;
		default: goto yy23;
	}
yy72:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA1:
		case 0xA4:
		case 0xA5: goto yy3;
		default: goto yy23;
	}
yy73:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x84: goto yy80;
		case 0x8E: goto yy64;
		case 0x8F: goto yy81;
		case 0x95: goto yy82;
		case 0xA1: goto yy83;
		case 0xA4: goto yy84;
		case 0xA9: goto yy85;
		case 0xAB: goto yy86;
		case 0xAC: goto yy87;
		case 0xAE: goto yy88;
		case 0xBD: goto yy89;
		default: goto yy23;
	}
yy74:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81: goto yy90;
		case 0x82: goto yy91;
		case 0x83: goto yy92;
		case 0x85: goto yy93;
		case 0x87: goto yy94;
		case 0x88: goto yy95;
		case 0x8A: goto yy96;
		case 0x91: goto yy97;
		case 0x93: goto yy98;
		case 0x97: goto yy99;
		case 0x99: goto yy100;
		case 0x9C: goto yy101;
		case 0xA0: goto yy37;
		case 0xA7: goto yy102;
		case 0xA8:
		case 0xBF: goto yy103;
		case 0xA9: goto yy104;
		case 0xAA: goto yy105;
		case 0xB1: goto yy106;
		case 0xBB: goto yy107;
		default: goto yy23;
	}
yy75:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x91: goto yy108;
		default: goto yy23;
	}
yy76:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA9: goto yy63;
		case 0xAB: goto yy109;
		case 0xAC: goto yy110;
		case 0xAD: goto yy30;
		case 0xBA: goto yy111;
		case 0xBF: goto yy102;
		default: goto yy23;
	}
yy77:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB2: goto yy64;
		default: goto yy23;
	}
yy78:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAA: goto yy112;
		default: goto yy23;
	}
yy79:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA5: goto yy45;
		default: goto yy23;
	}
yy80:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82: goto yy3;
		default: goto yy23;
	}
yy81:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90: goto yy3;
		default: goto yy23;
	}
yy82:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAF: goto yy3;
		default: goto yy23;
	}
yy83:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x97: goto yy3;
		default: goto yy23;
	}
yy84:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9F:
		case 0xBF: goto yy3;
		default: goto yy23;
	}
yy85:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0xBF: goto yy3;
		default: goto yy23;
	}
yy86:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6: goto yy3;
		default: goto yy23;
	}
yy87:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy23;
	}
yy88:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C: goto yy3;
		default: goto yy23;
	}
yy89:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99: goto yy3;
		default: goto yy23;
	}
yy90:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D: goto yy3;
		default: goto yy23;
	}
yy91:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBB:
		case 0xBC:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy23;
	}
yy92:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81: goto yy3;
		default: goto yy23;
	}
yy93:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0xB4:
		case 0xB5: goto yy3;
		default: goto yy23;
	}
yy94:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x8D:
		case 0x9B:
		case 0x9D:
		case 0x9E:
		case 0x9F: goto yy3;
		default: goto yy23;
	}
yy95:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD: goto yy3;
		default: goto yy23;
	}
yy96:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA9: goto yy3;
		default: goto yy23;
	}
yy97:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x9B:
		case 0x9D: goto yy3;
		default: goto yy23;
	}
yy98:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x86: goto yy3;
		default: goto yy23;
	}
yy99:
	yych = *++YYCURSOR;
	switch (yych) {
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
		case 0x97: goto yy3;
		default: goto yy23;
	}
yy100:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
		case 0x82:
		case 0x83:
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
		case 0xAC: goto yy3;
		default: goto yy23;
	}
yy101:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBC:
		case 0xBD:
		case 0xBE: goto yy3;
		default: goto yy23;
	}
yy102:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA2: goto yy3;
		default: goto yy23;
	}
yy103:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBF: goto yy3;
		default: goto yy23;
	}
yy104:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86: goto yy3;
		default: goto yy23;
	}
yy105:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2: goto yy3;
		default: goto yy23;
	}
yy106:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0xB0:
		case 0xB1: goto yy3;
		default: goto yy23;
	}
yy107:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB7:
		case 0xB8: goto yy3;
		default: goto yy23;
	}
yy108:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4: goto yy3;
		default: goto yy23;
	}
yy109:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB5: goto yy3;
		default: goto yy23;
	}
yy110:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB: goto yy3;
		default: goto yy23;
	}
yy111:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A: goto yy3;
		default: goto yy23;
	}
yy112:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B: goto yy3;
		default: goto yy23;
	}
}
#line 15 "encodings/unicode_group_Po_8_encoding_policy_substitute.re"

}
static const unsigned int chars_Po [] = {0x21,0x23,  0x25,0x27,  0x2a,0x2a,  0x2c,0x2c,  0x2e,0x2f,  0x3a,0x3b,  0x3f,0x40,  0x5c,0x5c,  0xa1,0xa1,  0xa7,0xa7,  0xb6,0xb7,  0xbf,0xbf,  0x37e,0x37e,  0x387,0x387,  0x55a,0x55f,  0x589,0x589,  0x5c0,0x5c0,  0x5c3,0x5c3,  0x5c6,0x5c6,  0x5f3,0x5f4,  0x609,0x60a,  0x60c,0x60d,  0x61b,0x61b,  0x61e,0x61f,  0x66a,0x66d,  0x6d4,0x6d4,  0x700,0x70d,  0x7f7,0x7f9,  0x830,0x83e,  0x85e,0x85e,  0x964,0x965,  0x970,0x970,  0x9fd,0x9fd,  0xa76,0xa76,  0xaf0,0xaf0,  0xc77,0xc77,  0xc84,0xc84,  0xdf4,0xdf4,  0xe4f,0xe4f,  0xe5a,0xe5b,  0xf04,0xf12,  0xf14,0xf14,  0xf85,0xf85,  0xfd0,0xfd4,  0xfd9,0xfda,  0x104a,0x104f,  0x10fb,0x10fb,  0x1360,0x1368,  0x166e,0x166e,  0x16eb,0x16ed,  0x1735,0x1736,  0x17d4,0x17d6,  0x17d8,0x17da,  0x1800,0x1805,  0x1807,0x180a,  0x1944,0x1945,  0x1a1e,0x1a1f,  0x1aa0,0x1aa6,  0x1aa8,0x1aad,  0x1b5a,0x1b60,  0x1bfc,0x1bff,  0x1c3b,0x1c3f,  0x1c7e,0x1c7f,  0x1cc0,0x1cc7,  0x1cd3,0x1cd3,  0x2016,0x2017,  0x2020,0x2027,  0x2030,0x2038,  0x203b,0x203e,  0x2041,0x2043,  0x2047,0x2051,  0x2053,0x2053,  0x2055,0x205e,  0x2cf9,0x2cfc,  0x2cfe,0x2cff,  0x2d70,0x2d70,  0x2e00,0x2e01,  0x2e06,0x2e08,  0x2e0b,0x2e0b,  0x2e0e,0x2e16,  0x2e18,0x2e19,  0x2e1b,0x2e1b,  0x2e1e,0x2e1f,  0x2e2a,0x2e2e,  0x2e30,0x2e39,  0x2e3c,0x2e3f,  0x2e41,0x2e41,  0x2e43,0x2e4f,  0x3001,0x3003,  0x303d,0x303d,  0x30fb,0x30fb,  0xa4fe,0xa4ff,  0xa60d,0xa60f,  0xa673,0xa673,  0xa67e,0xa67e,  0xa6f2,0xa6f7,  0xa874,0xa877,  0xa8ce,0xa8cf,  0xa8f8,0xa8fa,  0xa8fc,0xa8fc,  0xa92e,0xa92f,  0xa95f,0xa95f,  0xa9c1,0xa9cd,  0xa9de,0xa9df,  0xaa5c,0xaa5f,  0xaade,0xaadf,  0xaaf0,0xaaf1,  0xabeb,0xabeb,  0xfe10,0xfe16,  0xfe19,0xfe19,  0xfe30,0xfe30,  0xfe45,0xfe46,  0xfe49,0xfe4c,  0xfe50,0xfe52,  0xfe54,0xfe57,  0xfe5f,0xfe61,  0xfe68,0xfe68,  0xfe6a,0xfe6b,  0xff01,0xff03,  0xff05,0xff07,  0xff0a,0xff0a,  0xff0c,0xff0c,  0xff0e,0xff0f,  0xff1a,0xff1b,  0xff1f,0xff20,  0xff3c,0xff3c,  0xff61,0xff61,  0xff64,0xff65,  0x10100,0x10102,  0x1039f,0x1039f,  0x103d0,0x103d0,  0x1056f,0x1056f,  0x10857,0x10857,  0x1091f,0x1091f,  0x1093f,0x1093f,  0x10a50,0x10a58,  0x10a7f,0x10a7f,  0x10af0,0x10af6,  0x10b39,0x10b3f,  0x10b99,0x10b9c,  0x10f55,0x10f59,  0x11047,0x1104d,  0x110bb,0x110bc,  0x110be,0x110c1,  0x11140,0x11143,  0x11174,0x11175,  0x111c5,0x111c8,  0x111cd,0x111cd,  0x111db,0x111db,  0x111dd,0x111df,  0x11238,0x1123d,  0x112a9,0x112a9,  0x1144b,0x1144f,  0x1145b,0x1145b,  0x1145d,0x1145d,  0x114c6,0x114c6,  0x115c1,0x115d7,  0x11641,0x11643,  0x11660,0x1166c,  0x1173c,0x1173e,  0x1183b,0x1183b,  0x119e2,0x119e2,  0x11a3f,0x11a46,  0x11a9a,0x11a9c,  0x11a9e,0x11aa2,  0x11c41,0x11c45,  0x11c70,0x11c71,  0x11ef7,0x11ef8,  0x11fff,0x11fff,  0x12470,0x12474,  0x16a6e,0x16a6f,  0x16af5,0x16af5,  0x16b37,0x16b3b,  0x16b44,0x16b44,  0x16e97,0x16e9a,  0x16fe2,0x16fe2,  0x1bc9f,0x1bc9f,  0x1da87,0x1da8b,  0x1e95e,0x1e95f,  0x0,0x0};
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
	unsigned int * buffer_Po = new unsigned int [2356];
	YYCTYPE * s = (YYCTYPE *) buffer_Po;
	unsigned int buffer_len = encode_utf8 (chars_Po, sizeof (chars_Po) / sizeof (unsigned int), buffer_Po);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Po[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Po' failed\n");
	delete [] buffer_Po;
	return 0;
}
