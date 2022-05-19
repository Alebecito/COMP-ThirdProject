%option outfile="preprocessor.yy.c"
%option yylineno
%option prefix="ppf_"

/* Definition Section has one variable which can be accessed inside yylex() and main() */

%{
    #include "preprocessor.h"
    // int count = 0;
%}


/* Identifiers */

nondigit    [A-Za-z]|_
digit       [0-9]
hex-digit   [0-9]|[a-f]|[A-F]
hex-quad    {hex-digit}{4}
identifier-nondigit     {nondigit}
identifier  {identifier-nondigit}({identifier-nondigit}|{digit})*
/*integer-constant-octal 0|([0-7]+()*/


/*Universal character names*/
universal-character-name \\[uU]{hex-quad}

escape-sequence {simple-escape-sequence}|{octal-escape-sequence}|{hexadecimal-escape-sequence}|{universal-character-name}

/*Punctuators*/
/*punctuator #|\"*/

/* Header names */

/*h-char-sequence <([^>\n])+>*/
q-char-sequence [^\"\n]+
q-char-sequence-bracket <[^\>\<\n]+>
/*header-name {h-char-sequence}|{q-char-sequence}*/
header-name \"{q-char-sequence}\"|{q-char-sequence-bracket}

%s IN_COMMENT


/* Rule Section has three rules, first rule */
/* matches with capital letters, second rule*/
/* matches with any character except newline and */
/* third rule does not take input after the enter*/
%%


{header-name} {return HEADER_NAME;}

{identifier} {return IDENTIFIER;}

^[\t ]*[\#] {return PREPROCESSOR_START;}

\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/ {}

\/\/(.*) {}

\n {return NEW_LINE;}

[ \t] {return WHITESPACE;}



[\r]+ {}



. {return PP_CODE;};

<<EOF>>     return END_OF_FILE;

%%
  
/*** Code Section prints the number of
capital letter present in the given input***/
int yywrap(){}

void flex_create_buffer(FILE* file) {
    yyin = file;
    YY_BUFFER_STATE new_buffer = yy_create_buffer(yyin, YY_BUF_SIZE);
    yypush_buffer_state(new_buffer);
}

void flex_pop_buffer() {
    yypop_buffer_state();
}