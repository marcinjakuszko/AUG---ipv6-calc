%{
#include <stdio.h>
#include <stdlib.h>
#include "func.h"	

%}

// yylval
%union {
	struct number* ip;
	struct dectab* ipdec;
}

%locations

%token <ip> L_IP

%type <ip> exp nd

%start input
%%

input:
	| input exp input
	| input '\n'
	;

exp :	nd '+' nd
	{ 
		struct number result = operation($1, $3, '+');   
		$$ = &result;
	}
	| nd '-' nd
	{
		struct number result = operation($1, $3, '-');
		$$ = &result;
	}
	|
	nd '*' nd
	{
		struct number result = operation($1, $3, '*');   
		$$ = &result;
	}
	| 
	nd '/' nd
	{
		struct number result = operation($1, $3, '/');   
		$$ = &result;
	}	
	| nd	
	;
nd : 	L_IP 
	;
	 
/*{ 
			$$=$2

//printf("%s:%s:%s:%s:%s:%s:%s:%s\n", $1->tab1,$1->tab2,$1->tab3,$1->tab4,$1->tab5,$1->tab6,$1->tab7,$1->tab8);
};*/


%%

int yyerror( char* komunikat ) {
	fprintf(stderr, "ERR_BISON: %s at line: %d\n", komunikat, yylloc.first_line );
	exit(1);
}


int main() {
	yyparse();
}
