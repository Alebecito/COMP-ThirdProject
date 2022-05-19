#ifndef _PREPROCESSOR_H_
#define _PREPROCESSOR_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h>

typedef enum preprocessingToken
{
    IDENTIFIER,
    CODE_LINE,
    PREPROCESSOR_START,
    NEW_LINE,
    HEADER_NAME,
    END_OF_FILE,
    PP_CODE,
    WHITESPACE
} pp_token_type;

typedef struct pp_token
{
    pp_token_type type;
    char *lexeme; // yytext()
} PP_Token;

typedef struct preprocessor_id
{
    char *name;
    char *lexeme; // yytext()
    int size;
    int nullsym;
    PP_Token *pp_tokens;
} PP_ID;

typedef struct sympptable
{
    int nullsym;
    int size;
    PP_ID *pp_ids;
} SymPPTable;

SymPPTable symbolPPTable;

void new_error_nofile();
void print_error_type();

void add_ppid_to_symbolTable(PP_ID pp_id);
char *get_ppid_value(char *name);
int get_ppid_idx(char *name);

FILE *temp_file;

PP_Token get_preprocessing_token();
void preprocessor();

char *string_append(char *s1, char *s2);

char *current_filename;
#endif