%option yylineno

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [\t\v\n\f]

%{
    // #include "globals.h"
    #include "parserNuevecito.tab.h"
    #include <string.h>
    #include "globals.h"
    static int next_column = 1;
    int column = 1;
    char* line;
    #define COLUMN_NUMBER column = next_column; next_column += strlen(yytext)
    int check_type(void);
%}

%%
"auto"					{ return(AUTO); }
"break"					{ return(BREAK); }
"case"					{ return(CASE); }
"char"					{ return(CHAR); }
"const"					{ return(CONST); }
"continue"				{ return(CONTINUE); }
"default"				{ return(DEFAULT); }
"do"					{ return(DO); }
"double"				{ return(DOUBLE); }
"else"					{ return(ELSE); }
"enum"					{ return(ENUM); }
"extern"				{ return(EXTERN); }
"float"					{ return(FLOAT); }
"for"					{ return(FOR); }
"goto"					{ return(GOTO); }
"if"					{ return(IF); }
"inline"				{ return(INLINE); }
"int"					{ return(INT); }
"long"					{ return(LONG); }
"register"				{ return(REGISTER); }
"restrict"				{ return(RESTRICT); }
"return"				{ return(RETURN); }
"short"					{ return(SHORT); }
"signed"				{ return(SIGNED); }
"sizeof"				{ return(SIZEOF); }
"static"				{ return(STATIC); }
"struct"				{ return(STRUCT); }
"switch"				{ return(SWITCH); }
"typedef"				{ return(TYPEDEF); }
"union"					{ return(UNION); }
"unsigned"				{ return(UNSIGNED); }
"void"					{ return(VOID); }
"volatile"				{ return(VOLATILE); }
"while"					{ return(WHILE); }
"_Alignas"                              { return ALIGNAS; }
"_Alignof"                              { return ALIGNOF; }
"_Atomic"                               { return ATOMIC; }
"_Bool"                                 { return BOOL; }
"_Complex"                              { return COMPLEX; }
"_Generic"                              { return GENERIC; }
"_Imaginary"                            { return IMAGINARY; }
"_Noreturn"                             { return NORETURN; }
"_Static_assert"                        { return STATIC_ASSERT; }
"_Thread_local"                         { return THREAD_LOCAL; }
"__func__"                              { return FUNC_NAME; }

{L}{A}*					{ return check_type(); }

{HP}{H}+{IS}?				{ return I_CONSTANT; }
{NZ}{D}*{IS}?				{ return I_CONSTANT; }
"0"{O}*{IS}?				{ return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{ return I_CONSTANT; }

{D}+{E}{FS}?				{ return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?			{ return F_CONSTANT; }
{D}+"."{E}?{FS}?			{ return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{ return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?			{ return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{ return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{ return STRING_LITERAL; }

"..."					{ return ELLIPSIS; }
">>="					{ return RIGHT_ASSIGN; }
"<<="					{ return LEFT_ASSIGN; }
"+="					{ return ADD_ASSIGN; }
"-="					{ return SUB_ASSIGN; }
"*="					{ return MUL_ASSIGN; }
"/="					{ return DIV_ASSIGN; }
"%="					{ return MOD_ASSIGN; }
"&="					{ return AND_ASSIGN; }
"^="					{ return XOR_ASSIGN; }
"|="					{ return OR_ASSIGN; }
">>"					{ return RIGHT_OP; }
"<<"					{ return LEFT_OP; }
"++"					{ return INC_OP; }
"--"					{ return DEC_OP; }
"->"					{ return PTR_OP; }
"&&"					{ return AND_OP; }
"||"					{ return OR_OP; }
"<="					{ return LE_OP; }
">="					{ return GE_OP; }
"=="					{ return EQ_OP; }
"!="					{ return NE_OP; }
";"					{ return ';'; }
("{"|"<%")				{ return '{'; }
("}"|"%>")				{ return '}'; }
","					{ return ','; }
":"					{ return ':'; }
"="					{ return '='; }
"("					{ return '('; }
")"					{ return ')'; }
("["|"<:")				{ return '['; }
("]"|":>")				{ return ']'; }
"."					{ return '.'; }
"&"					{ return '&'; }
"!"					{ return '!'; }
"~"					{ return '~'; }
"-"					{ return '-'; }
"+"					{ return '+'; }
"*"					{ return '*'; }
"/"					{ return '/'; }
"%"					{ return '%'; }
"<"					{ return '<'; }
">"					{ return '>'; }
"^"					{ return '^'; }
"|"					{ return '|'; }
"?"					{ return '?'; }

{WS}+					{ /* whitespace separates tokens */ }
.					{ /* discard bad characters */ }

%%

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

int get_symbol_idx (char* value) {
    for (int i = 0 ; i < symbolTable.nullsym; i++){
        if (strcmp(symbolTable.symbols[i].lexeme, value) == 0)
            return i;
    }
    return -1;
}

int get_symbol_type(char* value) {
    for(int i = 0 ; i < symbolTable.nullsym; i++) {
        if (strcmp(symbolTable.symbols[i].lexeme, value) == 0)
            return symbolTable.symbols[i].type;
    }
    return -1;
}

void add_symbol_to_symbolTable(Symbol symbol) {
    if (symbolTable.nullsym >= symbolTable.size ) {
        symbolTable.size *= 2;
        Symbol* new_symbolTable = realloc(symbolTable.symbols, symbolTable.size * sizeof(Symbol));
        if (new_symbolTable == NULL) {
            printf("Unable to allocate enough memory for symbol table");
            exit(-1);
        } else {
            symbolTable.symbols = new_symbolTable;
        }
    }   
    int symbol_idx = get_symbol_idx(symbol.lexeme);
    if (symbol_idx == -1) {
        symbolTable.symbols[symbolTable.nullsym++] = symbol;
    } else {
        symbolTable.symbols[symbol_idx] = symbol;
    }
}

void show_symbol_table() {
    printf("\n********** Symbol Table **********\n");
    printf("Length: %d \n", symbolTable.nullsym);
    for (int i = 0; i < symbolTable.nullsym; i++) {
        printf("\t%s -> %d\n", symbolTable.symbols[i].lexeme, symbolTable.symbols[i].type);

        // if (strchr(symbolTable.pp_ids[i].lexeme, '"') != 0) {
        //     printf("%s -> %s\n", symbolTable.pp_ids[i].name, symbolTable.pp_ids[i].lexeme);
        // }
    }
    printf("Length: %d. Max size: %d \n", symbolTable.nullsym, symbolTable.size);
    printf("********************\n\n");
}


int check_type(void) {
    printf("CHECK_TYPE: %d\n", typedef_name_flag);
    Symbol new_symbol;
    if (typedef_name_flag == 1) {
        new_symbol.type = TYPEDEF_NAME;
        new_symbol.lexeme = malloc(sizeof(char) * (strlen(yytext) + 1));
        strcpy(new_symbol.lexeme, yytext);
        add_symbol_to_symbolTable(new_symbol);
        typedef_name_flag = 0;
        // show_symbol_table();
        return TYPEDEF_NAME;
    } 
    else if (typedef_name_flag == 2) {
        typedef_name_flag = 0;
        if (get_symbol_type(yytext) != -1) {
            return TYPEDEF_NAME; 
        } else {
            return IDENTIFIER;
        }
    }
    else {
        return IDENTIFIER;
    }
    return IDENTIFIER;
}