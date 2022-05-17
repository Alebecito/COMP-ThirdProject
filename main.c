#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "globals.h"
extern int yylex();
extern int yyerror();
extern int yyparse();
extern int yylineno;
extern int column;
extern FILE *yyin;
extern char *lineptr;
extern int yydebug;

#define YYERROR_VERBOSE 1

int main(int argc, char **argv)
{
    symbolTable.symbols = malloc(128 * sizeof(Symbol));
    symbolTable.nullsym = 0;
    symbolTable.size = 128;
    // #ifdef YYDEBUG
    if (strcmp(argv[1], "1") == 0) {
        printf("NO DEBUG");
        yydebug = 1;
    } else {
        yydebug = 0;
    }
    // #endif
    typedef_name_flag = 2;
    // printf("QUE LE PASE WEON2\n");
    FILE *source_file = fopen("prueba.c", "r");
    // source_file = new_file;
    yyin = source_file;
    // que basura es esto de abajo

    yyparse();
    /* printf("yysymbol_kind_t: %d", yysymbol_kind_t); */
    /* printf("yytext: %s\n",yytext); */
    return 0;
}