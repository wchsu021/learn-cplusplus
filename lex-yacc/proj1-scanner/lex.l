%{
    int yylex(void);
    int nchar, nword, nline; 
%}

%%

\n          { nline++; nchar++; }
[^ \t\n]+   { nword++, nchar += yyleng; }
.           { nchar++; } 

%%

int yywrap(void) {
    return 1;
}

int main(void) {
    const char* sFile = "file.txt";
    FILE* fp = fopen(sFile, "r");
    if (fp == NULL)
    {
        printf("cannot open %s\n", sFile);
        return -1;
    }
    extern FILE* yyin;
    yyin = fp;
    yylex();
    printf("Characters: %d\nWords: %d\nLines: %d\n", nchar, nword, nline);
    return 0;
}
