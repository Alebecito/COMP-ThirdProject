
extern void preprocessor(char* input_filename);

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
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

int main(int argc, char *argv[]) {
    // printf("ERROR");
    int flags, opt;
    int nsecs, tfnd;

    nsecs = 0;
    tfnd = 0;
    flags = 0;
    includePath = malloc(MAXPATH * sizeof(char));
    quotePath = malloc(MAXPATH * sizeof(char));
    char fileName[MAXPATH] = "";
    char* usageInfo = "Usage: %s [-I include-path] [-q include-path] [-h] file-name\n\n"
                    "-I include-path\t\tPath to be used by the compiler to find include files\n"
                    "-q include-path\t\tPath to be used by the compiler to find include files of the quote form\n"
                    "-h\t\t\tDisplays compiler usage\n"
                    "file-name\t\tName of the file to be compiled\n";
    while ((opt = getopt(argc, argv, "hI:q:")) != -1) {
        switch (opt) {
        case 'I':
            flags = 1;
            strcpy(includePath, optarg);
            break;
        case 'h':
            printf( usageInfo,
                    argv[0]);
            exit(EXIT_SUCCESS);
            break;
        case 'q':     
            strcpy(quotePath, optarg);
            break;
        default: /* '?' */
            fprintf(stderr, 
                    usageInfo,
                    argv[0]);
            exit(EXIT_FAILURE);
        }
    }

    if (optind >= argc) {
        fprintf(stderr, "Please provide a file-name\n\n");
        fprintf(stderr, 
                usageInfo,
                argv[0]);
        exit(EXIT_FAILURE);
    }
    strcpy(fileName, argv[optind]);
    original_filename = malloc(strlen(fileName) + 1);
    // printf("ERROR");
    strcpy(original_filename, fileName);

    FILE* check_file = fopen(original_filename, "r");
    if (check_file == NULL) {
        fprintf(stderr, "File %s not found\n", original_filename);
        exit(EXIT_FAILURE);
    }
    // printf("name argument = %s\n", fileName);

    // /* Other code omitted */

    preprocessor(fileName);

    FILE* source_file = fopen(new_file_name, "r");
    yyin = source_file;

    symbolTable.symbols = malloc(128 * sizeof(Symbol));
    symbolTable.nullsym = 0;
    symbolTable.size = 128;
    yyparse();

    exit(EXIT_SUCCESS);
}