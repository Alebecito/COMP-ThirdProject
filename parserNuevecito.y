%{

#include <stdio.h>
#include <string.h>
extern int yylex();
extern int yyerror();
extern int yylineno;
extern int column;
extern FILE* yyin;
extern char* yytext;
#define YYERROR_VERBOSE 1
%}

%token	<value> IDENTIFIER INTEGER_CONSTANT FLOATING_CONSTANT CHARACTER_CONSTANT STRING_LITERAL 
%token 	WHITESPACE TYPEDEF_NAME

%token	PTR_OP INC_OP DEC_OP UNARY_OP LEFT_SHIFT RIGHT_SHIFT LE GE GREATER_OP HEADER_NAME
%token  LOWER_OP EQ NOT_EQ LOGICAL_AND LOGICAL_OR ASSIGNMENT_OPERATOR ELLIPSIS

%token  SIZEOF TYPEDEF EXTERN STATIC AUTO REGISTER VOID CHAR SHORT INT LONG FLOAT DOUBLE DEFAULT IF SWITCH
%token  SIGNED UNSIGNED _BOOL _COMPLEX _IMAGINARY STRUCT UNION ENUM CONST RESTRICT VOLATILE INLINE CASE ELSE
%token  FOR DO WHILE GOTO CONTINUE BREAK RETURN

%nonassoc "then"
%nonassoc ELSE

%union {}

%token-table

%start translation_unit

%%

primary_expression
	: IDENTIFIER
	| constant
	| STRING_LITERAL
	| '(' expression ')'
	;

constant
	: INTEGER_CONSTANT		
	| FLOATING_CONSTANT
  	| CHARACTER_CONSTANT
	; 
	
postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| '(' type_name ')' '{' initializer_list '}'
	| '(' type_name ')' '{' initializer_list ',' '}'
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| UNARY_OP cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_SHIFT additive_expression
	| shift_expression RIGHT_SHIFT additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression LOWER_OP shift_expression
	| relational_expression GREATER_OP shift_expression
	| relational_expression LE shift_expression
	| relational_expression GE shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ relational_expression
	| equality_expression NOT_EQ relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression LOGICAL_AND inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression LOGICAL_OR logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression ASSIGNMENT_OPERATOR assignment_expression
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression	/* with constraints */
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: storage_class_specifier 
	| storage_class_specifier declaration_specifiers
	| type_specifier 
	| type_specifier declaration_specifiers
	| type_qualifier 
	| type_qualifier declaration_specifiers
	| function_specifier 
	| function_specifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator 
	| declarator '=' initializer
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| _BOOL
	| _COMPLEX
	| _IMAGINARY
	| struct_or_union_specifier
	| enum_specifier
	| TYPEDEF_NAME	
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier 
	| type_specifier specifier_qualifier_list
	| type_qualifier 
	| type_qualifier specifier_qualifier_list
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression 
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST
	| RESTRICT
	| VOLATILE
	;

function_specifier
	: INLINE
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '[' ']'
 	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_declarator '[' STATIC assignment_expression ']'
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' type_qualifier_list '*' ']'
  	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' ')'
	| direct_declarator '(' identifier_list ')'
	;

pointer
	: '*' 
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;

parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers
	| declaration_specifiers abstract_declarator
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

// revisar
direct_abstract_declarator
	: '(' abstract_declarator ')'
  	| '[' ']'
  	| '[' assignment_expression ']'
  	| direct_abstract_declarator '[' ']'
  	| direct_abstract_declarator '[' assignment_expression ']'
  	| '[' '*' ']'
  	| direct_abstract_declarator '[' '*' ']'
  	| '(' ')'
  	| '(' parameter_type_list ')'
  	| direct_abstract_declarator '(' ')'
  	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| designation initializer 
	| initializer_list ',' initializer
	| initializer_list ',' designation initializer 
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{'  block_item_list '}'
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration
	| statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement %prec "then"
	| IF '(' expression ')' statement ELSE statement 
	| SWITCH '(' expression ')' statement
	;

// revisar
iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
  | FOR '(' ';' ';' ')' statement
  | FOR '(' expression ';' ';' ')' statement
  | FOR '(' ';' expression ';' ')' statement
  | FOR '(' ';' ';' expression ')' statement
  | FOR '(' expression ';' expression ';' expression ')' statement
  | FOR '(' declaration ';' ')' statement
  | FOR '(' declaration expression ';' ')' statement
  | FOR '(' declaration ';' expression ')' statement
  | FOR '(' declaration expression ';' expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator compound_statement
	| declaration_specifiers declarator declaration_list compound_statement 
	;

declaration_list
	: declaration
	| declaration_list declaration
	;
%%

int main(int argc, char **argv) {

	// #ifdef YYDEBUG
  	// 	yydebug = 1;
	// #endif

    FILE* source_file = fopen("prueba.c", "r");
    // source_file = new_file;
    yyin = source_file;
	
  	yyparse();
	/* printf("yysymbol_kind_t: %d", yysymbol_kind_t); */
	/* printf("yytext: %s\n",yytext); */
	return 0;
}

int yyerror(const char *str) {
    fprintf(stderr, "error: %s, line %d, column %d\n", str, yylineno, column);
}

const char* token_name(int t) {
  return yytname[YYTRANSLATE(t)];
}