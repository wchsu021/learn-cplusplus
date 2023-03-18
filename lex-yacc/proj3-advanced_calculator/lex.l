%{
#include "main.h"
#include "yacc.tab.h"
extern "C"
{
    int yywrap(void);
    int yylex(void);
}
%}

digit       ([0-9])
posint      ({digit}+)
blank_chars ([ \f\r\t\v]+)
expressions ([-*+/()])

%%

{posint}        { yylval = atoi(yytext); return NUM_T; }
{expressions}   { return yytext[0]; }
{blank_chars}   { ; }
\n              { ; }        
=               { return EQUAL_T; }


%%

int yywrap(void)
{
    return 1;
}
