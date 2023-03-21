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

%left '+' '-'
%left '*' '/'
%nonassoc UMINUS


%%

lines:
    | lines func EQUAL_T   { printf("%d\n", $2); }
    ;

func:
    expr              { ; }
    ;

expr:
      NUM_T                 { $$ = $1; }
    | expr '+' expr         { $$ = $1 + $3; }
    | expr '-' expr         { $$ = $1 - $3; }
    | expr '*' expr         { $$ = $1 * $3; }
    | expr '/' expr         { $$ = $1 / $3; }
    | '-' expr %prec UMINUS { $$ = -$2; }
    | '(' expr ')'          { $$ = $2; }
    ;

%%

void yyerror(const char *s)
{
    cerr << s << endl;
}



