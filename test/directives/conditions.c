/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -ci



// types:re2c (expect yycC1, yycC2, yycC3, YC1, YC2)
enum YYCONDTYPE {
	yycC1,
	yycC2,
	yycC3,
	YC1,
	YC2,
};


// types:re2c:x (expect yycC1, yycC3)
enum YYCONDTYPE {
	yycC1,
	yycC3,
};


// types:re2c:y (expect YC1, YC2)
enum YYCONDTYPE {
	YC1,
	YC2,
};


// types:re2c:y:x (expect YC1, YC2, yycC1, yycC3)
enum YYCONDTYPE {
	YC1,
	YC2,
	yycC1,
	yycC3,
};


// types:re2c:z (expect empty)


// unnamed global block (conditions C1, C2)

{
	YYCTYPE yych;
Lstart:
	switch (YYGETCONDITION()) {
		case yycC1: goto yyc_C1;
		case yycC2: goto yyc_C2;
	}
/* *********************************** */
yyc_C1:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
	{ return; }
yy2:
	++YYCURSOR;
	YYSETCONDITION(yycC2);
	{ goto Lstart; }
/* *********************************** */
yyc_C2:
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy5;
		default: goto yy4;
	}
yy4:
	++YYCURSOR;
	{ return; }
yy5:
	++YYCURSOR;
	YYSETCONDITION(yycC1);
	goto yyc_C1;
}


// local block 'x' (conditions C1, C3)

{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
		case yycC1: goto Lx_C1;
		case yycC3: goto Lx_C3;
	}
/* *********************************** */
Lx_C1:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy8;
		default: goto yy7;
	}
yy7:
	++YYCURSOR;
	{ return x; }
yy8:
	++YYCURSOR;
	YYSETCONDITION(yycC3);
	{ goto Lx_C3; }
/* *********************************** */
Lx_C3:
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy11;
		default: goto yy10;
	}
yy10:
	++YYCURSOR;
	{ return x; }
yy11:
	++YYCURSOR;
	YYSETCONDITION(yycC1);
	goto Lx_C1;
}


// global block 'y' (conditions C1, C2)

{
	YYCTYPE yych;
Ly_start:
	switch (YYGETCONDITION()) {
		case YC1: goto yyc_C1;
		case YC2: goto yyc_C2;
	}
/* *********************************** */
yyc_C1:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy14;
		default: goto yy13;
	}
yy13:
	++YYCURSOR;
	{ return y; }
yy14:
	++YYCURSOR;
	YYSETCONDITION(YC2);
	{ goto Ly_start; }
/* *********************************** */
yyc_C2:
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy17;
		default: goto yy16;
	}
yy16:
	++YYCURSOR;
	{ return y; }
yy17:
	++YYCURSOR;
	YYSETCONDITION(YC1);
	goto yyc_C1;
}


// global block 'z' (no conditions)

{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case 'z': goto yy20;
		default: goto yy19;
	}
yy19:
	++YYCURSOR;
	{ return 1; }
yy20:
	++YYCURSOR;
	{ return 0; }
}
