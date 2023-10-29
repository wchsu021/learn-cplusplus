%{

%}

valid_id        [_a-zA-Z][a-zA-Z0-9_]*
invalid_id      ^[^a-zA-Z_]

%%
{valid_id}      { printf("Valid Identifier: %s\n", yytext); }
{invalid_id}    { printf("Invalid Identifier: %s\n", yytext); }
.               { ; }

%%
int yywrap() {
    return 1;
}

int main() {
    printf("Please insert a string to check if it is a valid id: \n");
    yylex();
    return 0;
}