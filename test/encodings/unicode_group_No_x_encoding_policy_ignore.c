/* Generated by re2c */
#line 1 "encodings/unicode_group_No_x_encoding_policy_ignore.re"
// re2c $INPUT -o $OUTPUT -x --encoding-policy ignore
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
No:
	
#line 14 "encodings/unicode_group_No_x_encoding_policy_ignore.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x249B) {
		if (yych <= 0x0F29) {
			if (yych <= 0x0B71) {
				if (yych <= 0x00B9) {
					if (yych <= 0x00B1) goto yy1;
					if (yych <= 0x00B3) goto yy3;
					if (yych >= 0x00B9) goto yy3;
				} else {
					if (yych <= 0x00BE) {
						if (yych >= 0x00BC) goto yy3;
					} else {
						if (yych <= 0x09F3) goto yy1;
						if (yych <= 0x09F9) goto yy3;
					}
				}
			} else {
				if (yych <= 0x0C7E) {
					if (yych <= 0x0BEF) {
						if (yych <= 0x0B77) goto yy3;
					} else {
						if (yych <= 0x0BF2) goto yy3;
						if (yych >= 0x0C78) goto yy3;
					}
				} else {
					if (yych <= 0x0D5E) {
						if (yych >= 0x0D58) goto yy3;
					} else {
						if (yych <= 0x0D6F) goto yy1;
						if (yych <= 0x0D78) goto yy3;
					}
				}
			}
		} else {
			if (yych <= 0x2070) {
				if (yych <= 0x17EF) {
					if (yych <= 0x0F33) goto yy3;
					if (yych <= 0x1368) goto yy1;
					if (yych <= 0x137C) goto yy3;
				} else {
					if (yych <= 0x19D9) {
						if (yych <= 0x17F9) goto yy3;
					} else {
						if (yych <= 0x19DA) goto yy3;
						if (yych >= 0x2070) goto yy3;
					}
				}
			} else {
				if (yych <= 0x214F) {
					if (yych <= 0x2079) {
						if (yych >= 0x2074) goto yy3;
					} else {
						if (yych <= 0x207F) goto yy1;
						if (yych <= 0x2089) goto yy3;
					}
				} else {
					if (yych <= 0x2188) {
						if (yych <= 0x215F) goto yy3;
					} else {
						if (yych <= 0x2189) goto yy3;
						if (yych >= 0x2460) goto yy3;
					}
				}
			}
		}
	} else {
		if (yych <= 0xA82F) {
			if (yych <= 0x321F) {
				if (yych <= 0x2793) {
					if (yych <= 0x24E9) goto yy1;
					if (yych <= 0x24FF) goto yy3;
					if (yych >= 0x2776) goto yy3;
				} else {
					if (yych <= 0x2CFD) {
						if (yych >= 0x2CFD) goto yy3;
					} else {
						if (yych <= 0x3191) goto yy1;
						if (yych <= 0x3195) goto yy3;
					}
				}
			} else {
				if (yych <= 0x325F) {
					if (yych <= 0x3247) {
						if (yych <= 0x3229) goto yy3;
					} else {
						if (yych != 0x3250) goto yy3;
					}
				} else {
					if (yych <= 0x3289) {
						if (yych >= 0x3280) goto yy3;
					} else {
						if (yych <= 0x32B0) goto yy1;
						if (yych <= 0x32BF) goto yy3;
					}
				}
			}
		} else {
			if (yych <= 0xD807) {
				if (yych <= 0xD802) {
					if (yych <= 0xD7FF) {
						if (yych <= 0xA835) goto yy3;
					} else {
						if (yych <= 0xD800) goto yy4;
						if (yych >= 0xD802) goto yy5;
					}
				} else {
					if (yych <= 0xD804) {
						if (yych <= 0xD803) goto yy6;
						goto yy7;
					} else {
						if (yych <= 0xD805) goto yy8;
						if (yych <= 0xD806) goto yy9;
						goto yy10;
					}
				}
			} else {
				if (yych <= 0xD834) {
					if (yych <= 0xD81A) {
						if (yych >= 0xD81A) goto yy11;
					} else {
						if (yych <= 0xD81B) goto yy12;
						if (yych >= 0xD834) goto yy13;
					}
				} else {
					if (yych <= 0xD83A) {
						if (yych >= 0xD83A) goto yy14;
					} else {
						if (yych <= 0xD83B) goto yy15;
						if (yych <= 0xD83C) goto yy16;
					}
				}
			}
		}
	}
yy1:
	++YYCURSOR;
yy2:
#line 14 "encodings/unicode_group_No_x_encoding_policy_ignore.re"
	{ return YYCURSOR == limit; }
#line 156 "encodings/unicode_group_No_x_encoding_policy_ignore.c"
yy3:
	++YYCURSOR;
#line 13 "encodings/unicode_group_No_x_encoding_policy_ignore.re"
	{ goto No; }
#line 161 "encodings/unicode_group_No_x_encoding_policy_ignore.c"
yy4:
	yych = *++YYCURSOR;
	if (yych <= 0xDD89) {
		if (yych <= 0xDD33) {
			if (yych <= 0xDD06) goto yy2;
			goto yy3;
		} else {
			if (yych <= 0xDD74) goto yy2;
			if (yych <= 0xDD78) goto yy3;
			goto yy2;
		}
	} else {
		if (yych <= 0xDEFB) {
			if (yych <= 0xDD8B) goto yy3;
			if (yych <= 0xDEE0) goto yy2;
			goto yy3;
		} else {
			if (yych <= 0xDF1F) goto yy2;
			if (yych <= 0xDF23) goto yy3;
			goto yy2;
		}
	}
yy5:
	yych = *++YYCURSOR;
	if (yych <= 0xDDD1) {
		if (yych <= 0xDCFA) {
			if (yych <= 0xDC78) {
				if (yych <= 0xDC57) goto yy2;
				if (yych <= 0xDC5F) goto yy3;
				goto yy2;
			} else {
				if (yych <= 0xDC7F) goto yy3;
				if (yych <= 0xDCA6) goto yy2;
				if (yych <= 0xDCAF) goto yy3;
				goto yy2;
			}
		} else {
			if (yych <= 0xDDBB) {
				if (yych <= 0xDCFF) goto yy3;
				if (yych <= 0xDD15) goto yy2;
				if (yych <= 0xDD1B) goto yy3;
				goto yy2;
			} else {
				if (yych <= 0xDDBD) goto yy3;
				if (yych <= 0xDDBF) goto yy2;
				if (yych <= 0xDDCF) goto yy3;
				goto yy2;
			}
		}
	} else {
		if (yych <= 0xDEEA) {
			if (yych <= 0xDE7C) {
				if (yych <= 0xDDFF) goto yy3;
				if (yych <= 0xDE3F) goto yy2;
				if (yych <= 0xDE48) goto yy3;
				goto yy2;
			} else {
				if (yych <= 0xDE7E) goto yy3;
				if (yych <= 0xDE9C) goto yy2;
				if (yych <= 0xDE9F) goto yy3;
				goto yy2;
			}
		} else {
			if (yych <= 0xDF77) {
				if (yych <= 0xDEEF) goto yy3;
				if (yych <= 0xDF57) goto yy2;
				if (yych <= 0xDF5F) goto yy3;
				goto yy2;
			} else {
				if (yych <= 0xDF7F) goto yy3;
				if (yych <= 0xDFA8) goto yy2;
				if (yych <= 0xDFAF) goto yy3;
				goto yy2;
			}
		}
	}
yy6:
	yych = *++YYCURSOR;
	if (yych <= 0xDE7E) {
		if (yych <= 0xDCF9) goto yy2;
		if (yych <= 0xDCFF) goto yy3;
		if (yych <= 0xDE5F) goto yy2;
		goto yy3;
	} else {
		if (yych <= 0xDF26) {
			if (yych <= 0xDF1C) goto yy2;
			goto yy3;
		} else {
			if (yych <= 0xDF50) goto yy2;
			if (yych <= 0xDF54) goto yy3;
			goto yy2;
		}
	}
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0xDC51) goto yy2;
	if (yych <= 0xDC65) goto yy3;
	if (yych <= 0xDDE0) goto yy2;
	if (yych <= 0xDDF4) goto yy3;
	goto yy2;
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0xDF39) goto yy2;
	if (yych <= 0xDF3B) goto yy3;
	goto yy2;
yy9:
	yych = *++YYCURSOR;
	if (yych <= 0xDCE9) goto yy2;
	if (yych <= 0xDCF2) goto yy3;
	goto yy2;
yy10:
	yych = *++YYCURSOR;
	if (yych <= 0xDC59) goto yy2;
	if (yych <= 0xDC6C) goto yy3;
	if (yych <= 0xDFBF) goto yy2;
	if (yych <= 0xDFD4) goto yy3;
	goto yy2;
yy11:
	yych = *++YYCURSOR;
	if (yych <= 0xDF5A) goto yy2;
	if (yych <= 0xDF61) goto yy3;
	goto yy2;
yy12:
	yych = *++YYCURSOR;
	if (yych <= 0xDE7F) goto yy2;
	if (yych <= 0xDE96) goto yy3;
	goto yy2;
yy13:
	yych = *++YYCURSOR;
	if (yych <= 0xDEDF) goto yy2;
	if (yych <= 0xDEF3) goto yy3;
	if (yych <= 0xDF5F) goto yy2;
	if (yych <= 0xDF78) goto yy3;
	goto yy2;
yy14:
	yych = *++YYCURSOR;
	if (yych <= 0xDCC6) goto yy2;
	if (yych <= 0xDCCF) goto yy3;
	goto yy2;
yy15:
	yych = *++YYCURSOR;
	if (yych <= 0xDCB0) {
		if (yych <= 0xDCAB) {
			if (yych <= 0xDC70) goto yy2;
			goto yy3;
		} else {
			if (yych <= 0xDCAC) goto yy2;
			if (yych <= 0xDCAF) goto yy3;
			goto yy2;
		}
	} else {
		if (yych <= 0xDD2D) {
			if (yych <= 0xDCB4) goto yy3;
			if (yych <= 0xDD00) goto yy2;
			goto yy3;
		} else {
			if (yych <= 0xDD2E) goto yy2;
			if (yych <= 0xDD3D) goto yy3;
			goto yy2;
		}
	}
yy16:
	yych = *++YYCURSOR;
	if (yych <= 0xDCFF) goto yy2;
	if (yych <= 0xDD0C) goto yy3;
	goto yy2;
}
#line 15 "encodings/unicode_group_No_x_encoding_policy_ignore.re"

}
static const unsigned int chars_No [] = {0xb2,0xb3,  0xb9,0xb9,  0xbc,0xbe,  0x9f4,0x9f9,  0xb72,0xb77,  0xbf0,0xbf2,  0xc78,0xc7e,  0xd58,0xd5e,  0xd70,0xd78,  0xf2a,0xf33,  0x1369,0x137c,  0x17f0,0x17f9,  0x19da,0x19da,  0x2070,0x2070,  0x2074,0x2079,  0x2080,0x2089,  0x2150,0x215f,  0x2189,0x2189,  0x2460,0x249b,  0x24ea,0x24ff,  0x2776,0x2793,  0x2cfd,0x2cfd,  0x3192,0x3195,  0x3220,0x3229,  0x3248,0x324f,  0x3251,0x325f,  0x3280,0x3289,  0x32b1,0x32bf,  0xa830,0xa835,  0x10107,0x10133,  0x10175,0x10178,  0x1018a,0x1018b,  0x102e1,0x102fb,  0x10320,0x10323,  0x10858,0x1085f,  0x10879,0x1087f,  0x108a7,0x108af,  0x108fb,0x108ff,  0x10916,0x1091b,  0x109bc,0x109bd,  0x109c0,0x109cf,  0x109d2,0x109ff,  0x10a40,0x10a48,  0x10a7d,0x10a7e,  0x10a9d,0x10a9f,  0x10aeb,0x10aef,  0x10b58,0x10b5f,  0x10b78,0x10b7f,  0x10ba9,0x10baf,  0x10cfa,0x10cff,  0x10e60,0x10e7e,  0x10f1d,0x10f26,  0x10f51,0x10f54,  0x11052,0x11065,  0x111e1,0x111f4,  0x1173a,0x1173b,  0x118ea,0x118f2,  0x11c5a,0x11c6c,  0x11fc0,0x11fd4,  0x16b5b,0x16b61,  0x16e80,0x16e96,  0x1d2e0,0x1d2f3,  0x1d360,0x1d378,  0x1e8c7,0x1e8cf,  0x1ec71,0x1ecab,  0x1ecad,0x1ecaf,  0x1ecb1,0x1ecb4,  0x1ed01,0x1ed2d,  0x1ed2f,0x1ed3d,  0x1f100,0x1f10c,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_No = new unsigned int [1778];
	YYCTYPE * s = (YYCTYPE *) buffer_No;
	unsigned int buffer_len = encode_utf16 (chars_No, sizeof (chars_No) / sizeof (unsigned int), buffer_No);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_No[i];
	if (!scan (s, s + buffer_len))
		printf("test 'No' failed\n");
	delete [] buffer_No;
	return 0;
}
