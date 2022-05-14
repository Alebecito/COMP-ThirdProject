%option yylineno

octal-digit   [0-7]
digit   [0-9]
nonzero-digit   [1-9]
nondigit   [a-zA-Z_]
alphabetical-digit   [a-zA-Z_0-9]
hexadecimal-digit   [a-fA-F0-9]
hexadecimal-prefix  (0[xX])
exponent-part   ([Ee][+-]?{digit}+)
binary-exponent-part   ([Pp][+-]?{digit}+)
floating-suffix   (f|F|l|L)
integer-suffix   (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
escape-sequence   (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
whitespace  [\t\v\n\f]

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
"_Alignas"                              { return _ALIGNAS; }
"_Alignof"                              { return _ALIGNOF; }
"_Atomic"                               { return _ATOMIC; }
"_Bool"                                 { return _BOOL; }
"_Complex"                              { return _COMPLEX; }
"_Generic"                              { return _GENERIC; }
"_Imaginary"                            { return _IMAGINARY; }
"_Noreturn"                             { return _NORETURN; }
"_Static_assert"                        { return _STATIC_ASSERT; }
"_Thread_local"                         { return _THREAD_LOCAL; }
"__func__"                              { return FUNC_NAME; }

{nondigit}{alphabetical-digit}*					{ return check_type(); }

{hexadecimal-prefix}{hexadecimal-digit}+{integer-suffix}?				{ return INTEGER_CONSTANT; }
{nonzero-digit}{digit}*{integer-suffix}?				{ return INTEGER_CONSTANT; }
"0"{octal-digit}*{integer-suffix}?				{ return INTEGER_CONSTANT; }
{CP}?"'"([^'\\\n]|{escape-sequence})+"'"		{ return INTEGER_CONSTANT; }

{digit}+{exponent-part}{floating-suffix}?				{ return FLOATING_CONSTANT; }
{digit}*"."{digit}+{exponent-part}?{floating-suffix}?			{ return FLOATING_CONSTANT; }
{digit}+"."{exponent-part}?{floating-suffix}?			{ return FLOATING_CONSTANT; }
{hexadecimal-prefix}{hexadecimal-digit}+{binary-exponent-part}{floating-suffix}?			{ return FLOATING_CONSTANT; }
{hexadecimal-prefix}{hexadecimal-digit}*"."{hexadecimal-digit}+{binary-exponent-part}{floating-suffix}?			{ return FLOATING_CONSTANT; }
{hexadecimal-prefix}{hexadecimal-digit}+"."{binary-exponent-part}{floating-suffix}?			{ return FLOATING_CONSTANT; }

({SP}?\"([^"\\\n]|{escape-sequence})*\"{whitespace}*)+	{ return STRING_LITERAL; }

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

{whitespace}+					{ /* whitespace separates tokens */ }
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