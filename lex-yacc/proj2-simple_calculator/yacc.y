%{
#include "main.h"

extern "C"
{
    void yyerror(const char *s);
    int yylex(void);
    int yyparse();
}
%}

%token NUM_T
%token EQUAL_T


%%

lines:
    | lines expr EQUAL_T   { printf("%d\n", $2); }
    ;

expr:
      NUM_T '+' NUM_T   { $$ = $1 + $3; }
    | NUM_T '-' NUM_T   { $$ = $1 - $3; }
    | NUM_T '*' NUM_T   { $$ = $1 * $3; }
    | NUM_T '/' NUM_T   { $$ = $1 / $3; }
    ;

%%

void yyerror(const char *s)
{
    cerr << s << endl;
}



