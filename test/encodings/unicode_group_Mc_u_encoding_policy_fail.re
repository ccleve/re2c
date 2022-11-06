// re2c $INPUT -o $OUTPUT -u --encoding-policy fail
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Mc:
	/*!re2c
		re2c:yyfill:enable = 0;
		Mc = [\u0903-\u0903\u093b-\u093b\u093e-\u0940\u0949-\u094c\u094e-\u094f\u0982-\u0983\u09be-\u09c0\u09c7-\u09c8\u09cb-\u09cc\u09d7-\u09d7\u0a03-\u0a03\u0a3e-\u0a40\u0a83-\u0a83\u0abe-\u0ac0\u0ac9-\u0ac9\u0acb-\u0acc\u0b02-\u0b03\u0b3e-\u0b3e\u0b40-\u0b40\u0b47-\u0b48\u0b4b-\u0b4c\u0b57-\u0b57\u0bbe-\u0bbf\u0bc1-\u0bc2\u0bc6-\u0bc8\u0bca-\u0bcc\u0bd7-\u0bd7\u0c01-\u0c03\u0c41-\u0c44\u0c82-\u0c83\u0cbe-\u0cbe\u0cc0-\u0cc4\u0cc7-\u0cc8\u0cca-\u0ccb\u0cd5-\u0cd6\u0d02-\u0d03\u0d3e-\u0d40\u0d46-\u0d48\u0d4a-\u0d4c\u0d57-\u0d57\u0d82-\u0d83\u0dcf-\u0dd1\u0dd8-\u0ddf\u0df2-\u0df3\u0f3e-\u0f3f\u0f7f-\u0f7f\u102b-\u102c\u1031-\u1031\u1038-\u1038\u103b-\u103c\u1056-\u1057\u1062-\u1064\u1067-\u106d\u1083-\u1084\u1087-\u108c\u108f-\u108f\u109a-\u109c\u17b6-\u17b6\u17be-\u17c5\u17c7-\u17c8\u1923-\u1926\u1929-\u192b\u1930-\u1931\u1933-\u1938\u1a19-\u1a1a\u1a55-\u1a55\u1a57-\u1a57\u1a61-\u1a61\u1a63-\u1a64\u1a6d-\u1a72\u1b04-\u1b04\u1b35-\u1b35\u1b3b-\u1b3b\u1b3d-\u1b41\u1b43-\u1b44\u1b82-\u1b82\u1ba1-\u1ba1\u1ba6-\u1ba7\u1baa-\u1baa\u1be7-\u1be7\u1bea-\u1bec\u1bee-\u1bee\u1bf2-\u1bf3\u1c24-\u1c2b\u1c34-\u1c35\u1ce1-\u1ce1\u1cf7-\u1cf7\u302e-\u302f\ua823-\ua824\ua827-\ua827\ua880-\ua881\ua8b4-\ua8c3\ua952-\ua953\ua983-\ua983\ua9b4-\ua9b5\ua9ba-\ua9bb\ua9be-\ua9c0\uaa2f-\uaa30\uaa33-\uaa34\uaa4d-\uaa4d\uaa7b-\uaa7b\uaa7d-\uaa7d\uaaeb-\uaaeb\uaaee-\uaaef\uaaf5-\uaaf5\uabe3-\uabe4\uabe6-\uabe7\uabe9-\uabea\uabec-\uabec\U00011000-\U00011000\U00011002-\U00011002\U00011082-\U00011082\U000110b0-\U000110b2\U000110b7-\U000110b8\U0001112c-\U0001112c\U00011145-\U00011146\U00011182-\U00011182\U000111b3-\U000111b5\U000111bf-\U000111c0\U0001122c-\U0001122e\U00011232-\U00011233\U00011235-\U00011235\U000112e0-\U000112e2\U00011302-\U00011303\U0001133e-\U0001133f\U00011341-\U00011344\U00011347-\U00011348\U0001134b-\U0001134d\U00011357-\U00011357\U00011362-\U00011363\U00011435-\U00011437\U00011440-\U00011441\U00011445-\U00011445\U000114b0-\U000114b2\U000114b9-\U000114b9\U000114bb-\U000114be\U000114c1-\U000114c1\U000115af-\U000115b1\U000115b8-\U000115bb\U000115be-\U000115be\U00011630-\U00011632\U0001163b-\U0001163c\U0001163e-\U0001163e\U000116ac-\U000116ac\U000116ae-\U000116af\U000116b6-\U000116b6\U00011720-\U00011721\U00011726-\U00011726\U0001182c-\U0001182e\U00011838-\U00011838\U000119d1-\U000119d3\U000119dc-\U000119df\U000119e4-\U000119e4\U00011a39-\U00011a39\U00011a57-\U00011a58\U00011a97-\U00011a97\U00011c2f-\U00011c2f\U00011c3e-\U00011c3e\U00011ca9-\U00011ca9\U00011cb1-\U00011cb1\U00011cb4-\U00011cb4\U00011d8a-\U00011d8e\U00011d93-\U00011d94\U00011d96-\U00011d96\U00011ef5-\U00011ef6\U00016f51-\U00016f87\U0001d165-\U0001d166\U0001d16d-\U0001d172];
		Mc { goto Mc; }
		* { return YYCURSOR == limit; }
	*/
}
static const unsigned int chars_Mc [] = {0x903,0x903,  0x93b,0x93b,  0x93e,0x940,  0x949,0x94c,  0x94e,0x94f,  0x982,0x983,  0x9be,0x9c0,  0x9c7,0x9c8,  0x9cb,0x9cc,  0x9d7,0x9d7,  0xa03,0xa03,  0xa3e,0xa40,  0xa83,0xa83,  0xabe,0xac0,  0xac9,0xac9,  0xacb,0xacc,  0xb02,0xb03,  0xb3e,0xb3e,  0xb40,0xb40,  0xb47,0xb48,  0xb4b,0xb4c,  0xb57,0xb57,  0xbbe,0xbbf,  0xbc1,0xbc2,  0xbc6,0xbc8,  0xbca,0xbcc,  0xbd7,0xbd7,  0xc01,0xc03,  0xc41,0xc44,  0xc82,0xc83,  0xcbe,0xcbe,  0xcc0,0xcc4,  0xcc7,0xcc8,  0xcca,0xccb,  0xcd5,0xcd6,  0xd02,0xd03,  0xd3e,0xd40,  0xd46,0xd48,  0xd4a,0xd4c,  0xd57,0xd57,  0xd82,0xd83,  0xdcf,0xdd1,  0xdd8,0xddf,  0xdf2,0xdf3,  0xf3e,0xf3f,  0xf7f,0xf7f,  0x102b,0x102c,  0x1031,0x1031,  0x1038,0x1038,  0x103b,0x103c,  0x1056,0x1057,  0x1062,0x1064,  0x1067,0x106d,  0x1083,0x1084,  0x1087,0x108c,  0x108f,0x108f,  0x109a,0x109c,  0x17b6,0x17b6,  0x17be,0x17c5,  0x17c7,0x17c8,  0x1923,0x1926,  0x1929,0x192b,  0x1930,0x1931,  0x1933,0x1938,  0x1a19,0x1a1a,  0x1a55,0x1a55,  0x1a57,0x1a57,  0x1a61,0x1a61,  0x1a63,0x1a64,  0x1a6d,0x1a72,  0x1b04,0x1b04,  0x1b35,0x1b35,  0x1b3b,0x1b3b,  0x1b3d,0x1b41,  0x1b43,0x1b44,  0x1b82,0x1b82,  0x1ba1,0x1ba1,  0x1ba6,0x1ba7,  0x1baa,0x1baa,  0x1be7,0x1be7,  0x1bea,0x1bec,  0x1bee,0x1bee,  0x1bf2,0x1bf3,  0x1c24,0x1c2b,  0x1c34,0x1c35,  0x1ce1,0x1ce1,  0x1cf7,0x1cf7,  0x302e,0x302f,  0xa823,0xa824,  0xa827,0xa827,  0xa880,0xa881,  0xa8b4,0xa8c3,  0xa952,0xa953,  0xa983,0xa983,  0xa9b4,0xa9b5,  0xa9ba,0xa9bb,  0xa9be,0xa9c0,  0xaa2f,0xaa30,  0xaa33,0xaa34,  0xaa4d,0xaa4d,  0xaa7b,0xaa7b,  0xaa7d,0xaa7d,  0xaaeb,0xaaeb,  0xaaee,0xaaef,  0xaaf5,0xaaf5,  0xabe3,0xabe4,  0xabe6,0xabe7,  0xabe9,0xabea,  0xabec,0xabec,  0x11000,0x11000,  0x11002,0x11002,  0x11082,0x11082,  0x110b0,0x110b2,  0x110b7,0x110b8,  0x1112c,0x1112c,  0x11145,0x11146,  0x11182,0x11182,  0x111b3,0x111b5,  0x111bf,0x111c0,  0x1122c,0x1122e,  0x11232,0x11233,  0x11235,0x11235,  0x112e0,0x112e2,  0x11302,0x11303,  0x1133e,0x1133f,  0x11341,0x11344,  0x11347,0x11348,  0x1134b,0x1134d,  0x11357,0x11357,  0x11362,0x11363,  0x11435,0x11437,  0x11440,0x11441,  0x11445,0x11445,  0x114b0,0x114b2,  0x114b9,0x114b9,  0x114bb,0x114be,  0x114c1,0x114c1,  0x115af,0x115b1,  0x115b8,0x115bb,  0x115be,0x115be,  0x11630,0x11632,  0x1163b,0x1163c,  0x1163e,0x1163e,  0x116ac,0x116ac,  0x116ae,0x116af,  0x116b6,0x116b6,  0x11720,0x11721,  0x11726,0x11726,  0x1182c,0x1182e,  0x11838,0x11838,  0x119d1,0x119d3,  0x119dc,0x119df,  0x119e4,0x119e4,  0x11a39,0x11a39,  0x11a57,0x11a58,  0x11a97,0x11a97,  0x11c2f,0x11c2f,  0x11c3e,0x11c3e,  0x11ca9,0x11ca9,  0x11cb1,0x11cb1,  0x11cb4,0x11cb4,  0x11d8a,0x11d8e,  0x11d93,0x11d94,  0x11d96,0x11d96,  0x11ef5,0x11ef6,  0x16f51,0x16f87,  0x1d165,0x1d166,  0x1d16d,0x1d172,  0x0,0x0};
static unsigned int encode_utf32 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			*s++ = j;
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_Mc = new unsigned int [430];
	YYCTYPE * s = (YYCTYPE *) buffer_Mc;
	unsigned int buffer_len = encode_utf32 (chars_Mc, sizeof (chars_Mc) / sizeof (unsigned int), buffer_Mc);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Mc[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Mc' failed\n");
	delete [] buffer_Mc;
	return 0;
}
