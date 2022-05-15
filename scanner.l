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
whitespace  [ ]
newline [\n]

%{
    // #include "globals.h"
    #include "parserNuevecito.tab.h"
    #include <string.h>
    #include "globals.h"
    static int next_column = 1;
    int column = 1;
    char* line = NULL;
    #define COLUMN_NUMBER column = next_column; next_column += strlen(yytext)
    int check_type(void);
    size_t line_alloc = 0;
    ssize_t line_sent, line_len = 0;

    #define YY_INPUT(buf, result, max_size) \
        ssize_t available = line_len - line_sent; \
        if (!available) { \
            line_sent = 0; \
            available = getline(&line, &line_alloc, yyin); \
            if (available < 0) { \
                available = 0; \
            } \
            line_len = available; \
        } \
        if (available > max_size) available = max_size; \
        memcpy(buf, line + line_sent, available); \
        line_sent += available; \
        if (!available) { \
            free(line); \
            line = NULL; \
            line_alloc = line_sent = line_len = 0; \
        } \
        result = available;
%}

%%
"auto"					{ COLUMN_NUMBER; return(AUTO); }
"break"					{ COLUMN_NUMBER; return(BREAK); }
"case"					{ COLUMN_NUMBER; return(CASE); }
"char"					{ COLUMN_NUMBER; return(CHAR); }
"const"					{ COLUMN_NUMBER; return(CONST); }
"continue"				{ COLUMN_NUMBER; return(CONTINUE); }
"default"				{ COLUMN_NUMBER; return(DEFAULT); }
"do"					{ COLUMN_NUMBER; return(DO); }
"double"				{ COLUMN_NUMBER; return(DOUBLE); }
"else"					{ COLUMN_NUMBER; return(ELSE); }
"enum"					{ COLUMN_NUMBER; return(ENUM); }
"extern"				{ COLUMN_NUMBER; return(EXTERN); }
"float"					{ COLUMN_NUMBER; return(FLOAT); }
"for"					{ COLUMN_NUMBER; return(FOR); }
"goto"					{ COLUMN_NUMBER; return(GOTO); }
"if"					{ COLUMN_NUMBER; return(IF); }
"inline"				{ COLUMN_NUMBER; return(INLINE); }
"int"					{ COLUMN_NUMBER; return(INT); }
"long"					{ COLUMN_NUMBER; return(LONG); }
"register"				{ COLUMN_NUMBER; return(REGISTER); }
"restrict"				{ COLUMN_NUMBER; return(RESTRICT); }
"return"				{ COLUMN_NUMBER; return(RETURN); }
"short"					{ COLUMN_NUMBER; return(SHORT); }
"signed"				{ COLUMN_NUMBER; return(SIGNED); }
"sizeof"				{ COLUMN_NUMBER; return(SIZEOF); }
"static"				{ COLUMN_NUMBER; return(STATIC); }
"struct"				{ COLUMN_NUMBER; return(STRUCT); }
"switch"				{ COLUMN_NUMBER; return(SWITCH); }
"typedef"				{ COLUMN_NUMBER; return(TYPEDEF); }
"union"					{ COLUMN_NUMBER; return(UNION); }
"unsigned"				{ COLUMN_NUMBER; return(UNSIGNED); }
"void"					{ COLUMN_NUMBER; return(VOID); }
"volatile"				{ COLUMN_NUMBER; return(VOLATILE); }
"while"					{ COLUMN_NUMBER; return(WHILE); }
"_Alignas"              { COLUMN_NUMBER; return _ALIGNAS; }
"_Alignof"              { COLUMN_NUMBER; return _ALIGNOF; }
"_Atomic"               { COLUMN_NUMBER; return _ATOMIC; }
"_Bool"                 { COLUMN_NUMBER; return _BOOL; }
"_Complex"              { COLUMN_NUMBER; return _COMPLEX; }
"_Generic"              { COLUMN_NUMBER; return _GENERIC; }
"_Imaginary"            { COLUMN_NUMBER; return _IMAGINARY; }
"_Noreturn"             { COLUMN_NUMBER; return _NORETURN; }
"_Static_assert"        { COLUMN_NUMBER; return _STATIC_ASSERT; }
"_Thread_local"         { COLUMN_NUMBER; return _THREAD_LOCAL; }
"__func__"              { COLUMN_NUMBER; return FUNC_NAME; }

{nondigit}{alphabetical-digit}*					                                                            { COLUMN_NUMBER; return check_type(); }

{hexadecimal-prefix}{hexadecimal-digit}+{integer-suffix}?			                                        { COLUMN_NUMBER; return INTEGER_CONSTANT; }
{nonzero-digit}{digit}*{integer-suffix}?				                                                    { COLUMN_NUMBER; return INTEGER_CONSTANT; }
"0"{octal-digit}*{integer-suffix}?				                                                            { COLUMN_NUMBER; return INTEGER_CONSTANT; }
{CP}?"'"([^'\\\n]|{escape-sequence})+"'"		                                                            { COLUMN_NUMBER; return INTEGER_CONSTANT; }

{digit}+{exponent-part}{floating-suffix}?				                                                    { COLUMN_NUMBER; return FLOATING_CONSTANT; }
{digit}*"."{digit}+{exponent-part}?{floating-suffix}?			                                            { COLUMN_NUMBER; return FLOATING_CONSTANT; }
{digit}+"."{exponent-part}?{floating-suffix}?			                                                    { COLUMN_NUMBER; return FLOATING_CONSTANT; }
{hexadecimal-prefix}{hexadecimal-digit}+{binary-exponent-part}{floating-suffix}?			                { COLUMN_NUMBER; return FLOATING_CONSTANT; }
{hexadecimal-prefix}{hexadecimal-digit}*"."{hexadecimal-digit}+{binary-exponent-part}{floating-suffix}?		{ COLUMN_NUMBER; return FLOATING_CONSTANT; }
{hexadecimal-prefix}{hexadecimal-digit}+"."{binary-exponent-part}{floating-suffix}?			                { COLUMN_NUMBER; return FLOATING_CONSTANT; }

({SP}?\"([^"\\\n]|{escape-sequence})*\"{whitespace}*)+	{COLUMN_NUMBER; return STRING_LITERAL; }

"..."					{ COLUMN_NUMBER; return ELLIPSIS; }
">>="					{ COLUMN_NUMBER; return RIGHT_ASSIGN; }
"<<="					{ COLUMN_NUMBER; return LEFT_ASSIGN; }
"+="					{ COLUMN_NUMBER; return ADD_ASSIGN; }
"-="					{ COLUMN_NUMBER; return SUB_ASSIGN; }
"*="					{ COLUMN_NUMBER; return MUL_ASSIGN; }
"/="					{ COLUMN_NUMBER; return DIV_ASSIGN; }
"%="					{ COLUMN_NUMBER; return MOD_ASSIGN; }
"&="					{ COLUMN_NUMBER; return AND_ASSIGN; }
"^="					{ COLUMN_NUMBER; return XOR_ASSIGN; }
"|="					{ COLUMN_NUMBER; return OR_ASSIGN; }
">>"					{ COLUMN_NUMBER; return RIGHT_OP; }
"<<"					{ COLUMN_NUMBER; return LEFT_OP; }
"++"					{ COLUMN_NUMBER; return INC_OP; }
"--"					{ COLUMN_NUMBER; return DEC_OP; }
"->"					{ COLUMN_NUMBER; return PTR_OP; }
"&&"					{ COLUMN_NUMBER; return AND_OP; }
"||"					{ COLUMN_NUMBER; return OR_OP; }
"<="					{ COLUMN_NUMBER; return LE_OP; }
">="					{ COLUMN_NUMBER; return GE_OP; }
"=="					{ COLUMN_NUMBER; return EQ_OP; }
"!="					{ COLUMN_NUMBER; return NE_OP; }
";"					    { COLUMN_NUMBER; return ';'; }
("{"|"<%")				{ COLUMN_NUMBER; return '{'; }
("}"|"%>")				{ COLUMN_NUMBER; return '}'; }
","					    { COLUMN_NUMBER; return ','; }
":"					    { COLUMN_NUMBER; return ':'; }
"="					    { COLUMN_NUMBER; return '='; }
"("					    { COLUMN_NUMBER; return '('; }
")"					    { COLUMN_NUMBER; return ')'; }
("["|"<:")				{ COLUMN_NUMBER; return '['; }
("]"|":>")				{ COLUMN_NUMBER; return ']'; }
"."					    { COLUMN_NUMBER; return '.'; }
"&"					    { COLUMN_NUMBER; return '&'; }
"!"					    { COLUMN_NUMBER; return '!'; }
"~"					    { COLUMN_NUMBER; return '~'; }
"-"					    { COLUMN_NUMBER; return '-'; }
"+"					    { COLUMN_NUMBER; return '+'; }
"*"					    { COLUMN_NUMBER; return '*'; }
"/"					    { COLUMN_NUMBER; return '/'; }
"%"					    { COLUMN_NUMBER; return '%'; }
"<"					    { COLUMN_NUMBER; return '<'; }
">"					    { COLUMN_NUMBER; return '>'; }
"^"					    { COLUMN_NUMBER; return '^'; }
"|"					    { COLUMN_NUMBER; return '|'; }
"?"					    { COLUMN_NUMBER; return '?'; }

{whitespace}+           { COLUMN_NUMBER; }
{newline} 				{ next_column = 1; }
.					    { }

%%

int yywrap(void) {
    return 1;         
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
    //printf("CHECK_TYPE: %d\n", typedef_name_flag);
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