#ifndef _GLOBALS_H_
#define _GLOBALS_H_
#define MAXPATH 1024

int typedef_name_flag;

typedef struct symbol {
    int type; 
    char* lexeme; //yytext()
} Symbol;

typedef struct symtable { 
    int nullsym;
    int size;
    Symbol *symbols;
} SymTable; 

SymTable symbolTable;

void add_symbol_to_symbolTable(Symbol symbol);
int get_symbol_type(char* value);
int get_symbol_idx (char* name);

// int get_ppid_idx (char* name);

#define FALSE 0
#define TRUE !FALSE
#define MAXIDLEN 33

FILE *new_file;
char *new_file_name;

char *includePath;
char *quotePath;

#endif