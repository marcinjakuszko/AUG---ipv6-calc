%option yylineno
%{

#include "q.tab.h"

struct number {
	char tab1[4];
	char tab2[4];
	char tab3[4];
	char tab4[4];
	char tab5[4];
	char tab6[4];
	char tab7[4];
	char tab8[4];
	}num;



void flexError() {
	fprintf(stderr, "FLEX_ERR: unknown token at line: %d\n", yylineno );
	exit(1);
}
%}


WCIECIE [ \t]*
CYFRAHEX [0-9a-f]
HEX8 {CYFRAHEX}{CYFRAHEX}{CYFRAHEX}{CYFRAHEX}
IP {HEX8}:{HEX8}:{HEX8}:{HEX8}:{HEX8}:{HEX8}:{HEX8}:{HEX8}

%s def
%%


{IP}			{
			  yylval.ip = malloc(sizeof(num));
			  sscanf( yytext, "%04s:%04s:%04s:%04s:%04s:%04s:%04s:%04s",yylval.ip->tab1, yylval.ip->tab2, yylval.ip->tab3, yylval.ip->tab4, yylval.ip->tab5, yylval.ip->tab6, yylval.ip->tab7, yylval.ip->tab8 );
			return L_IP;
			}
			
"+"			{ return '+'; }
"-"			{ return '-'; }
"*"			{ return '*'; }
"/"			{ return '/'; }

 /* smietnik */
{WCIECIE}		{}
.			{ flexError(); }

