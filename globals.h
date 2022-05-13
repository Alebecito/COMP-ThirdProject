#ifndef _GLOBALS_H_
#define _GLOBALS_H_

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
Symbol_Type get_symbol_type(char* value);
int get_symbol_idx (char* name);

// int get_ppid_idx (char* name);

#endif