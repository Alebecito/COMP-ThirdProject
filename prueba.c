int main() {
    typedef signed int t;
    typedef int plain;
    struct tag {
    unsigned t:4;
    const t:5;
    plain r:5;
    };

}

// int get_symbol_idx (char* value) {
//     for (int i = 0 ; i < symbolTable.nullsym; i++){
//         if (strcmp(symbolTable.symbols[i].lexeme, value) == 0)
//             return i;
//     }
//     return -1;
// }

// void add_symbol_to_symbolTable(Symbol symbol) {
//     if (symbolTable.nullsym >= symbolTable.size ) {
//         symbolTable.size *= 2;
//         Symbol* new_symbolTable = realloc(symbolTable.symbols, symbolTable.size * sizeof(Symbol));
//         if (new_symbolTable == NULL) {
//             printf("Unable to allocate enough memory for symbol table");
//             exit(-1);
//         } else {
//             symbolTable.symbols = new_symbolTable;
//         }
//     }   
//     int symbol_idx = get_symbol_idx(symbol.lexeme);
//     if (symbol_idx == -1) {
//         symbolTable.symbols[symbolTable.nullsym++] = symbol;
//     } else {
//         // symbolTable.symbols[symbol_idx].lexeme = pp_id.lexeme;
//     }
// }

// Symbol_Type get_symbol_type(char* name) {
//     for(int i = 0 ; i < symbolTable.nullsym; i++) {
//         if (strcmp(symbolTable.symbols[i].lexeme, value) == 0)
//             return symbolTable.symbols[i].type;
//     }
//     return NULL;
// }


// int check_type(void) {
//     // printf("check_type: %d\n", typedef_name_flag);
//     if (typedef_name_flag == 1) {
//         typedef_name_flag = 0;
//         return TYPEDEF_NAME;
//     } else if (typedef_name_flag == 2) {
//         if ()
//         typedef_name_flag = 0;
//         return TYPEDEF_NAME;
//     else {
//         return IDENTIFIER;
//     }
//     // return IDENTIFIER;
    
// }