

/* Definition Section has one variable which can be accessed inside yylex() and main() */

%{
    // #include "globals.h"
    #include "parserNuevecito.tab.h"
    int yylval;
    static int next_column = 1;
    int column = 1;
    #define COLUMN_NUMBER column = next_column; next_column += strlen(yytext)
%}



/* Keywords */

sizeof (sizeof)
typedef (typedef)
extern (extern)
static (static)
auto (auto)
register (register)
void (void)
char (char)
short (short)
int (int)
long (long)
float (float)
double (double)
signed (signed)
unsigned (unsigned)
_bool (_Bool)
_complex (_Complex)
_imaginary (_Imaginary)
struct (struct)
union (union)
enum (enum)
const (const)
restrict (restrict)
volatile (volatile)
inline (inline)
case (case)
default (default)
if (if)
else (else)
switch (switch)
for (for)
do (do)
while (while)
goto (goto)
continue (continue)
break (break)
return (return)


/*decimal-constant*/


integer-suffix ([uU](ll|LL|[lL]?))|((ll|LL|l|L)[uU]?)

decimal-constant        [1-9][0-9]*
octal-constant          0[0-7]*
hexadecimal-constant    0[xX][0-9a-fA-f]+

integer-constant ({decimal-constant}|{octal-constant}|{hexadecimal-constant}){integer-suffix}?


/*Universal character names*/
universal-character-name \\(u{hex-quad}|U{hex-quad}{hex-quad})

/* Identifiers */

nondigit    [A-Za-z]|_
digit       [0-9]
hex-digit   [0-9]|[a-f]|[A-F]
hex-quad    {hex-digit}{4}
identifier-nondigit     {nondigit}|{universal-character-name}
identifier  {identifier-nondigit}({identifier-nondigit}|{digit})*
/*integer-constant-octal 0|([0-7]+()*/

floating-constant {decimal-floating-constant}|{hexadecimal-floating-constant}
decimal-floating-constant ({fractional-constant}{exponent-part}?{floating-suffix}?)|({digit-sequence}{exponent-part}{floating-suffix}?)
hexadecimal-floating-constant ({hexadecimal-prefix}{hexadecimal-fractional-constant}{binary-exponent-part}{floating-suffix}?)|({hexadecimal-prefix}{hexadecimal-digit-sequence}{binary-exponent-part}{floating-suffix}?)
fractional-constant ({digit-sequence}?[.]{digit-sequence})|({digit-sequence}[.])
exponent-part [eE]{sign}?{digit-sequence}
sign [+-]
digit-sequence {digit}+
hexadecimal-fractional-constant ({hexadecimal-digit-sequence}?[.]{hexadecimal-digit-sequence})|({hexadecimal-digit-sequence}[.])
binary-exponent-part [pP]{sign}?{digit-sequence}
hexadecimal-digit-sequence {hex-digit}+
floating-suffix [fFlL]

/*Integer constants*/
hexadecimal-prefix 0x|0X
nonzero-digit [1-9]
octal-digit [0-7]
hexadecimal-digit [0-9a-fA-F]


/*Character constants*/
hexadecimal-escape-sequence \\x{hexadecimal-digit}{1,2}
octal-escape-sequence \\{octal-digit}{1,3}
simple-escape-sequence \\\'|\\\"|\\\\|\\[?abfnrtv]
escape-sequence {simple-escape-sequence}|{octal-escape-sequence}|{hexadecimal-escape-sequence}|{universal-character-name}
c-char [^\'\\\n]|{escape-sequence}
c-char-sequence {c-char}{1,2}
character-constant L?\'{c-char-sequence}\'

/* *String literals */
string-literal  L?\"([^\"\\\n]|{escape-sequence})*\"


/*Enumeration constants*/
enumeration-constant {identifier}

/*Punctuators*/


/*Operators*/

assignment-operators (=|\+=|-=|\*=|\/=|%=|&=|\|=|\^=|>>=|<<=)

unary_operator (%|\*|\+|-|~|!)

ptr_op (->)
inc_op (\+\+)
dec_op (--)
left_shift (<<)
right_shift (>>)
lower_op (<)
greater_op (>)
lower_equal (<=)
greater_equal (>=)
equal (==)
not_equal (!=)
logical_and (&&)
logical_or (\|\|)
ellipsis (\.\.\.)


/* Header names */

h-char-sequence <([^>\n])+>
q-char-sequence \"[^\"\n]+\"
header-name {h-char-sequence}|{q-char-sequence}

constant {integer-constant}|{floating-constant}|{enumeration-constant}|{character-constant}

/*([A-Za-z]|_)(([A-Za-z]|_)|[0-9])*/

/* Rule Section has three rules, first rule */
/* matches with capital letters, second rule*/
/* matches with any character except newline and */
/* third rule does not take input after the enter*/
%%

{sizeof} {COLUMN_NUMBER; return SIZEOF;}
{typedef} {COLUMN_NUMBER; return TYPEDEF;}
{extern} {COLUMN_NUMBER; return EXTERN;}
{static} {COLUMN_NUMBER; return STATIC;}
{auto} {COLUMN_NUMBER; return AUTO;}
{register} {COLUMN_NUMBER; return REGISTER;}
{void} {COLUMN_NUMBER; return VOID;}
{char} {COLUMN_NUMBER; return CHAR;}
{short} {COLUMN_NUMBER; return SHORT;}
{int} {COLUMN_NUMBER; return INT;}
{long} {COLUMN_NUMBER; return LONG;}
{float} {COLUMN_NUMBER; return FLOAT;}
{double} {COLUMN_NUMBER; return DOUBLE;}
{signed} {COLUMN_NUMBER; return SIGNED;}
{unsigned} {COLUMN_NUMBER; return UNSIGNED;}
{_bool} {COLUMN_NUMBER; return _BOOL;}
{_complex} {COLUMN_NUMBER; return _COMPLEX;}
{_imaginary} {COLUMN_NUMBER; return _IMAGINARY;}
{struct} {COLUMN_NUMBER; return STRUCT;}
{union} {COLUMN_NUMBER; return UNION;}
{enum} {COLUMN_NUMBER; return ENUM;}
{const} {COLUMN_NUMBER; return CONST;}
{restrict} {COLUMN_NUMBER; return RESTRICT;}
{volatile} {COLUMN_NUMBER; return VOLATILE;}
{inline} {COLUMN_NUMBER; return INLINE;}
{case} {COLUMN_NUMBER; return CASE;}
{default} {COLUMN_NUMBER; return DEFAULT;}
{if} {COLUMN_NUMBER; return IF;}
{else} {COLUMN_NUMBER; return ELSE;}
{switch} {COLUMN_NUMBER; return SWITCH;}
{for} {COLUMN_NUMBER; return FOR;}
{do} {COLUMN_NUMBER; return DO;}
{while} {COLUMN_NUMBER; return WHILE;}
{goto} {COLUMN_NUMBER; return GOTO;}
{continue} {COLUMN_NUMBER; return CONTINUE;}
{break} {COLUMN_NUMBER; return BREAK;}
{return} {COLUMN_NUMBER; return RETURN;}


{identifier} {COLUMN_NUMBER; printf("IDENTIFIER\n"); return IDENTIFIER;}

{integer-constant} {COLUMN_NUMBER; return INTEGER_CONSTANT;}
{floating-constant} {COLUMN_NUMBER; return FLOATING_CONSTANT;}
{character-constant} {COLUMN_NUMBER; return CHARACTER_CONSTANT;}

";" {COLUMN_NUMBER; return(';'); }
("{"|"<%") {COLUMN_NUMBER; return('{'); }
("}"|"%>") {COLUMN_NUMBER; return('}'); }
"," {COLUMN_NUMBER; return(','); }
":"	{COLUMN_NUMBER; return(':'); }
"="	{COLUMN_NUMBER; return('='); }
"("	{COLUMN_NUMBER; return('('); }
")"	{ COLUMN_NUMBER; return(')'); }
("["|"<:") {COLUMN_NUMBER; return('['); }
("]"|":>") {COLUMN_NUMBER; return(']'); }
"."	{COLUMN_NUMBER; return('.'); }
"&"	{COLUMN_NUMBER; return('&'); }
"!"	{COLUMN_NUMBER; return('!'); }
"~"	{COLUMN_NUMBER; return('~'); }
"-"	{COLUMN_NUMBER; return('-'); }
"+"	{COLUMN_NUMBER; return('+'); }
"*"	{COLUMN_NUMBER; return('*'); }
"/"	{COLUMN_NUMBER; return('/'); }
"%"	{COLUMN_NUMBER; return('%'); }
"^"	{COLUMN_NUMBER; return('^'); }
"|"	{COLUMN_NUMBER; return('|'); }
"?"	{COLUMN_NUMBER; return('?'); }

{ptr_op} {COLUMN_NUMBER; return PTR_OP;}
{inc_op} {COLUMN_NUMBER; return INC_OP;}
{dec_op} {COLUMN_NUMBER; return DEC_OP;}
{left_shift} {COLUMN_NUMBER; return LEFT_SHIFT;}
{right_shift} {COLUMN_NUMBER; return RIGHT_SHIFT;}
{lower_op} {COLUMN_NUMBER; return LOWER_OP;}
{greater_op} {COLUMN_NUMBER; return GREATER_OP;}
{lower_equal} {COLUMN_NUMBER; return LE;}
{greater_equal} {COLUMN_NUMBER; return GE;}
{equal} {COLUMN_NUMBER; return EQ;}
{not_equal} {COLUMN_NUMBER; return NOT_EQ;}
{logical_and} {COLUMN_NUMBER; return LOGICAL_AND;}
{logical_or} {COLUMN_NUMBER; return LOGICAL_OR;}
{ellipsis} {COLUMN_NUMBER; return ELLIPSIS;}

{assignment-operators} {COLUMN_NUMBER; return ASSIGNMENT_OPERATOR;}

{string-literal} {COLUMN_NUMBER; return STRING_LITERAL;}
{header-name} {COLUMN_NUMBER; return HEADER_NAME;}

[ ] {COLUMN_NUMBER; }
\n {COLUMN_NUMBER; /*printf("There's a newline \n");*/}

<<EOF>>     {/*printf("There's a EOF\n");  */return 0; }
. { }
%%

int check_type(void)
{
    if (atoi(yytext)== TYPEDEF_NAME) {
        return TYPEDEF_NAME;
    }

    if (atoi(yytext) == ENUMERATION_CONSTANT) {
        return ENUMERATION_CONSTANT;
    }

    return IDENTIFIER;
}