#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "preprocessor.h"
#include "globals.h"
#include <time.h>

void flex_create_buffer(FILE* file);
void flex_pop_buffer();

extern int ppf_lex();
extern FILE* ppf_in;
extern char* ppf_text;
extern int ppf_lineno;

extern int yylineno; // borrar
extern int pp_column; // borrar
extern char* pp_line;


char* first_tempfile_name;



int get_error_line_file(const char *str, char* file_name) {
    // printf("STR: %s\n", str);
    // printf("FILE_NAME: %s\n", file_name);

    char *result = strstr(pp_line, file_name) + 1;
    int position = result - pp_line;
    pp_column = position;

    // printf("PP_COLUMN: %d\n", pp_column);
	yellow();
    printf("%s:%d:%d: ", current_filename, ppf_lineno, pp_column);
	red();
	printf("error: ");
	// resetColor();
	printf("%s\n", str);
	// char *newLine = NULL;

	// if (!strstr(pp_line, "\n")) {
	// 	newLine = malloc(strlen(pp_line) + 2);
	// 	strcpy(newLine, pp_line);
	// 	strcat(newLine, "\n");
	// } else {
	// 	newLine = malloc(strlen(pp_line) + 1);
	// 	strcpy(newLine, pp_line);
	// }
	// printf("%s", newLine);
        printf ("\033[1;33m%5d\033[0m | %s", ppf_lineno, pp_line);
    // printf("POSITION: %d", position);
    char* column_str = malloc(sizeof(char) * 30);
    sprintf(column_str, "%d", pp_column);
    int offset = 5 + strlen(column_str);
    // printf("%d", offset);
	for(int i = 0; i < pp_column + offset - 2; i++)
		printf(" ");
	// red();
    printf("\033[1;31m^");
    for (int i = pp_column + offset ; i < pp_column + offset + strlen(file_name) ;i++) {
		printf("\033[1;31m~");
    }
    printf("\n");
    resetColor();
	// resetColor();
    
    remove(first_tempfile_name);
    remove(new_file_name);
    exit(-1);
}
/*
    char *result = strstr(pp_line, ppf_text);
    int position = result - pp_line;
    pp_column = position;
*/
int get_error_line(const char *str) {
    char *result = strstr(pp_line, ppf_text);
    int position = result - pp_line;
    pp_column = position;
    yellow();
    printf("%s:%d:%d: ", current_filename, ppf_lineno, pp_column);
	red();
	printf("error: ");
	printf("%s\n", str);
        printf ("\033[1;33m%5d\033[0m | %s", ppf_lineno, pp_line);
    // printf("POSITION: %d", position);
    char* column_str = malloc(sizeof(char) * 30);
    sprintf(column_str, "%d", pp_column);
    int offset = 7 + strlen(column_str);
	for(int i = 0; i < pp_column + offset - 2; i++)
		printf(" ");
	// red();
    printf("\033[1;31m^");
    
    // printf("%d", offset);

    for (int i = pp_column + offset ; i < pp_column + offset + strlen(ppf_text) ;i++) {
		printf("\033[1;31m~");
    }
    printf("\n");
    resetColor();
	// resetColor();
}

FILE* open_file(char* directory_path, char* file_name) {
    char* file_path = "";
    if (strlen(directory_path) > 0 && directory_path[strlen(directory_path) - 1] != '/') {
        directory_path = string_append(directory_path, "/");
    } 
    file_path = string_append(file_path, directory_path);
    file_path = string_append(file_path, file_name);
    // printf("SPath ----------> %s\n", file_path);
    FILE* fptr = fopen(file_path, "r");
    return fptr;
}

FILE* get_file_from_env(char* file_name) {
    char sPath[MAXPATH] = "";
    char *pTmp;
    if (( pTmp = getenv( "C_INCLUDE_PATH" )) != NULL ) {
        strncpy( sPath, pTmp, MAXPATH - 1 );
        return open_file(sPath, file_name);
    }
    else {
        return NULL;
    }
}

FILE* get_angleinclude_file(char* file_name) {
    char* include_paths[4];
    include_paths[0] = "/usr/local/include/";
    include_paths[1] = "libdir/gcc/target/version/include/";
    include_paths[2] = "/usr/target/include/";
    include_paths[3] = "/usr/include/";
    char* file_path = "";
    if (strcmp(includePath, "") != 0) {
        FILE* fptr = open_file(includePath, file_name);
        // printf("INCLUDE_PATH: %s\n", includePath);
        if (fptr != NULL) {
            return fptr;
        }
    } 
    FILE* file_from_env = get_file_from_env(file_name);
    if (file_from_env != NULL) {
        return file_from_env;
    }
    for (int i = 0; i < 4; i++) {
        file_path = string_append(file_path, include_paths[i]);
        file_path = string_append(file_path, file_name);
        FILE* fptr = fopen(file_path, "r");
        if (fptr == NULL) {
            // printf("Cannot open file %s \n", file_path);
            file_path = "\0";
        } else {
            // printf("get_include_file: \n");
            return fptr;
        }
    } 
    
    return NULL;
}



FILE* get_quoteinclude_file(char* file_name) {
    char* include_paths[4];
    include_paths[0] = "/usr/local/include/";
    include_paths[1] = "libdir/gcc/target/version/include/";
    include_paths[2] = "/usr/target/include/";
    include_paths[3] = "/usr/include/";
    // char* file_path = "";
    FILE* fptr = open_file("", file_name);
    if (fptr != NULL) {
        return fptr;
    }
    if (strcmp(quotePath, "") != 0) {
        FILE* fptr = open_file(quotePath, file_name);
        if (fptr != NULL) {
            return fptr;
        }
    } 
    if (strcmp(includePath, "") != 0) {
        FILE* fptr = open_file(includePath, file_name);
        if (fptr != NULL) {
            return fptr;
        }
    } 
    FILE* file_from_env = get_file_from_env(file_name);
    if (file_from_env != NULL) {
        return file_from_env;
    }
    for (int i = 0; i < 4; i++) {
        FILE* fptr = open_file(include_paths[i], file_name);
        if (fptr == NULL) {
            // printf("Cannot open file %s \n", file_path);
        } else {
            // printf("get_include_file: \n");
            return fptr;
        }
    } 
    
    return NULL;
}
// extern YY_BUFFER_STATE yy_create_buffer ( FILE *file, int size );
// void yyrestart( FILE *new_file );


// symbolPPTable.table = (char **)malloc(200*sizeof(char*));

// int lookup(char* s) {
//     int result = 0;
//     for(int i = 0 ; i < symbolPPTable.nullsym; i++){
//         if(strcmp(symbolPPTable.table[i], s) == 0)
//             result = 1;
//     }
//     return result;
// }

// void enter(char* s) {
//     if(symbolPPTable.nullsym < 200 ) {     
//         strcpy(symbolPPTable.table[symbolPPTable.nullsym], s);
//         symbolPPTable.nullsym++;   
//     } else {   
//         printf("Cantidad maxima de simbolos alcanzada");   
//     }   
// } 
// void check_id(char* s) {
//     if (!lookup(s)) {
//         enter(s);
//     }
// }

PP_Token ignoreWhitespace(PP_Token token) {
    while(strcmp(token.lexeme, " ") == 0 || strcmp(token.lexeme, "\t") == 0) {
        token = get_preprocessing_token();
    }
    return token;
}

PP_Token ignoreWhitespace2(PP_Token token, int write_to_output) {
    // printf("JODER\n");
    while(token.type == WHITESPACE) {
        fprintf(temp_file, "%s", token.lexeme);
        token = get_preprocessing_token();
    }
    return token;
}

void add_ppid_to_symbolTable(PP_ID pp_id) {
    // if(symbolPPTable.nullsym >= 200 ) {     
    // } 
    if (symbolPPTable.nullsym >= symbolPPTable.size ) {    // TODO: Usar modulo
        // symbolPPTable.pp_ids = malloc((symbolPPTable.nullsym*2)*sizeof(PP_ID));
        // TODO: Copiar valores anteriores
        // printf("CANTIDAD MAXIMA DE SIMBOLOS\n");   
        symbolPPTable.size *= 2;
        PP_ID* new_symbolTable = realloc(symbolPPTable.pp_ids, symbolPPTable.size * sizeof(PP_ID));
        // printf("hola\n");
        if (new_symbolTable == NULL) {
            new_error_nofile();
            print_error_type("Unable to allocate enough memory for symbol table", "");
        } else {
            symbolPPTable.pp_ids = new_symbolTable;
        }
    }   
    // printf("pp_id.name: %s\n", pp_id.name);
    int ppid_idx = get_ppid_idx(pp_id.name);
    // printf("ppid_idx: %d\n", ppid_idxsymbolTable.nullsym);
    if (ppid_idx == -1) {
        // printf("AGREGADO\n");
        symbolPPTable.pp_ids[symbolPPTable.nullsym++] = pp_id;
        // printf("\nJOLINES: %d\n", symbolPPTable.nullsym);
    } else {
        symbolPPTable.pp_ids[ppid_idx].lexeme = pp_id.lexeme;
        // printf("\nJOLINES2: %d\n", symbolPPTable.nullsym);
    }
    // symbolPPTable.pp_ids[symbolPPTable.nullsym++] = pp_id;
    // strcpy(symbolPPTable.table[symbolPPTable.nullsym], s);
    // symbolPPTable.nullsym++;   
    // puts("");
}

char* get_ppid_value(char* name) {
    // char* result;
    for(int i = 0 ; i < symbolPPTable.nullsym; i++){
        if(strcmp(symbolPPTable.pp_ids[i].name, name) == 0)
            return symbolPPTable.pp_ids[i].lexeme;
    }
    return NULL;
}

int get_ppid_idx (char* name) {
    // printf("current symbolPPTable.nullsym: %d\n", symbolPPTable.nullsym);
    for (int i = 0 ; i < symbolPPTable.nullsym; i++){
        // printf("symbolPPTable.pp_ids[i].name: %s. name: %s", symbolPPTable.pp_ids[i].name, name);
        if (strcmp(symbolPPTable.pp_ids[i].name, name) == 0)
            return i;
    }
    // printf("***********************************************************\n");
    return -1;
}

void show_symbolpp_table() {
    printf("********** Symbol Table **********\n");
    printf("Length: %d \n", symbolPPTable.nullsym);
    for (int i = 0; i < symbolPPTable.nullsym; i++) {
        printf("%s -> %s ||||||| ", symbolPPTable.pp_ids[i].name, symbolPPTable.pp_ids[i].lexeme);
        for (int j = 0; j < symbolPPTable.pp_ids[i].nullsym; j++) {
            printf("%s", symbolPPTable.pp_ids[i].pp_tokens[j].lexeme);
        }
        printf("\n");

        if (strchr(symbolPPTable.pp_ids[i].lexeme, '"') != 0) {
            printf("%s -> %s\n", symbolPPTable.pp_ids[i].name, symbolPPTable.pp_ids[i].lexeme);
        }
    }
    printf("********************\n");
    printf("Length: %d. Max size: %d \n", symbolPPTable.nullsym, symbolPPTable.size);
}

char *string_append(char *s1, char *s2) {
    // Create space for a new char array (string) on the heap large enough to hold
    // the characters in s1 and s2 AND a null terminator
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    int size = s1_length + s2_length + 1;
    char *s = calloc(size, sizeof(char));

    // Copy s1 into s
    for (int i = 0; i < s1_length; i++)
        s[i] = s1[i];

    // Copy s2 into s, but shifted over by the length of s1 to append it after s1!
    for (int i = 0; i < s2_length; i++)
        s[s1_length + i] = s2[i];

    // put the null terminator in to end the string
    s[size - 1] = '\0';

    return s;
}

void new_error_nofile() {
    printf("\033[1;31m"); //Set the text to the color red
    printf("error: ");
    printf("\033[0m"); //Resets the text to default color
}

void new_error(char* file_name) {
    printf("%s:%d:", basename(file_name), ppf_lineno);
    printf("\033[1;31m"); //Set the text to the color red
    printf(" error: ");
    printf("\033[0m"); //Resets the text to default color
}

void print_error_type(char* error_type, char* lexeme) {
    printf("%s", error_type);
    printf("%s\n", lexeme);
    remove(first_tempfile_name);
    remove(new_file_name);
    exit(-1);
}

void print_error_type_noexit(char* error_type, char* lexeme) {
    printf("%s", error_type);
    printf("%s\n", lexeme);
}

void preprocess_file(char* filename, char* oldFilename, int depthFile, int isAngleBracketFilename) {

    current_filename = filename;
    int isValidDirective = 0;

    // printf("Nuevo LLAMADO\n");
    FILE *fp;
    // printf("n");

    if (!isAngleBracketFilename) {
        
        fp = get_quoteinclude_file(filename);
        
        if (fp == NULL) {
            current_filename = oldFilename;

            char *error = malloc(1030);

            if (strcmp(oldFilename, "") == 0) {
                sprintf(error, "No such file or directory: %s", filename);  
                char* file_name_enclosed = malloc(strlen(filename) + 3);
                sprintf(file_name_enclosed, "\"%s\"", filename);
                get_error_line_file(error, file_name_enclosed);

                // new_error(filename);
                // print_error_type(error, "");
            } else {
                sprintf(error, "No such file or directory: %s", filename); 

                char* file_name_enclosed = malloc(strlen(filename) + 3);
 
                sprintf(file_name_enclosed, "\"%s\"", filename);
                get_error_line_file(error, file_name_enclosed);
                // new_error(oldFilename);

                // print_error_type(error, "");
            }
        };
    } else {
        fp = get_angleinclude_file(filename);
        if (fp == NULL) {
            current_filename = oldFilename;
            // printf("ARCHIVO NO EXISTE\n");
            char *error = malloc(1030);
            if (strcmp(oldFilename, "") == 0) {
                sprintf(error, "No such file or directory: %s", filename);  
                
                char* file_name_enclosed = malloc(strlen(filename) + 3);
                sprintf(file_name_enclosed, "<%s>", filename);
                get_error_line_file(error, file_name_enclosed);

                // new_error(filename);
                // print_error_type(error, "");
            } else {
                sprintf(error, "No such file or directory: %s", filename);  
                char* file_name_enclosed = malloc(strlen(filename) + 3);                

                sprintf(file_name_enclosed, "<%s>", filename);

                get_error_line_file(error, file_name_enclosed);

                // new_error(oldFilename);

                // print_error_type(error, "");
            }
        }
    }

    flex_create_buffer(fp);
    // printf("CAMBIO EN ppf_in\n");
    // enter("Abiel");
    PP_Token current_token = get_preprocessing_token();
    while (current_token.type != END_OF_FILE) {
        // printf("%s -> %d\n ------------ \n", current_token.lexeme, current_token.type);
        // current_token = ignoreWhitespace(current_token);
        current_token = ignoreWhitespace2(current_token, 1);
        if (current_token.type == PREPROCESSOR_START) {
            current_token = get_preprocessing_token();
            current_token = ignoreWhitespace(current_token);
            if (current_token.type == IDENTIFIER && strcmp(current_token.lexeme, "include") == 0) {
                current_token = get_preprocessing_token();
                current_token = ignoreWhitespace(current_token);
                if (current_token.type == HEADER_NAME) {
                    // printf("HEADER_NAME\n");
                    // printf("DIRECTIVA: %s\n", current_token.lexeme);
                    char *include_filename = malloc(strlen(current_token.lexeme) * sizeof(char));
                    int startsWith_angle_bracket = 0;
                    if (current_token.lexeme[0] == '<') {
                        startsWith_angle_bracket = 1;
                    }
                    char *new_filename = malloc(strlen(current_token.lexeme) * sizeof(char));
                    // printf("Hola\n");
                    // printf("HELLO");
                    strcpy(include_filename, current_token.lexeme); 
                    // include_filename = current_token.lexeme;
                    // size_t strLength = );
                    strncpy(new_filename, include_filename + 1, strlen(include_filename) - 2);
                    new_filename[strlen(include_filename) - 2] = '\0';
                    // puts(new_filename);
                    // printf("CURRENT depthFile: %d\n", depthFile);

                    current_token = ignoreWhitespace(current_token);
                    current_token = get_preprocessing_token();
                    int has_finished = 0;
                    if (current_token.type == END_OF_FILE) {
                        // printf("`````````````````````` FINAL DE ARCHIVO ````````````````````````\n");
                        has_finished = 1;
                    }
                    else if (current_token.type != NEW_LINE) {
                        // printf("%d", current_token.type);
                        // new_error(filename);
                        // print_error_type("extra tokens at end of #include directive", "");
                        get_error_line("extra tokens at end of #include directive");
                    }
                    isValidDirective = 1;
                    if (depthFile == 100) {
                        new_error(filename);
                        print_error_type("#include nested too deeply (max depth is 100)", "");
                    }
                    // printf("ES UN ANGLE BRACKER: %s. -> %c\n", new_filename, new_filename[0]);
                    int temp = pp_column;
                    if (startsWith_angle_bracket) {
                        // printf("ANGLE BRACKER\n");
                        preprocess_file(new_filename, filename, depthFile + 1, 1);
                    } else {
                        preprocess_file(new_filename, filename, depthFile + 1, 0);
                    }
                    pp_column = temp;
                    // printf("HELLO AGAIN\n");
                    // ppf_in = fp;
                    // flex_pop_buffer();
                    flex_pop_buffer();

                    // if (has_finished) {
                    // flex_pop_buffer();
                    //     printf("/***/*/*/**/**/*/ ENTRO /***/*/*/**/**/*/\n");
                    //     break;
                    // }
                    fprintf(temp_file, "\n");

                    // current_token = get_preprocessing_token();
                    // if (current_token.type == NEW_LINE || current_token.type == END_OF_FILE) {
                    //     preprocess_file(include_filename);
                    // }
                } else {
                    new_error(filename);
                    print_error_type("#include expects \"FILENAME\" or <FILENAME>", "");
                }
            } else if (current_token.type == IDENTIFIER && strcmp(current_token.lexeme, "define") == 0) {
                PP_Token name_token = get_preprocessing_token();
                name_token = ignoreWhitespace(name_token);
                // printf("name_token: content: %s, type: %d, length: %lu\n", name_token.lexeme, name_token.type, strlen(name_token.lexeme));

                PP_ID new_id;
                if (name_token.type == IDENTIFIER) {
                    new_id.name = malloc(strlen(name_token.lexeme) * sizeof(char));
                    strcpy(new_id.name, name_token.lexeme);
                    current_token = get_preprocessing_token();

                    current_token = ignoreWhitespace(current_token);

                    new_id.size = 8;
                    new_id.pp_tokens = malloc(8 * sizeof(PP_ID));
                    new_id.nullsym = 0;
                    new_id.lexeme = "";

                    PP_Token first_token;
                    first_token.type = PP_CODE;
                    first_token.lexeme = "";
                    new_id.pp_tokens[new_id.nullsym++] = first_token;
                    
                    while (current_token.type != NEW_LINE && current_token.type != END_OF_FILE) {
                        new_id.lexeme = string_append(new_id.lexeme, current_token.lexeme);
                        if (new_id.nullsym == new_id.size) {
                            new_id.size *= 2;
                            new_id.pp_tokens = realloc(new_id.pp_tokens, new_id.size * sizeof(PP_Token));
                        }
                        // printf("%s\n", current_token.lexeme);
                        if (current_token.type == IDENTIFIER) {
                            PP_Token first_token;
                            first_token.type = IDENTIFIER;
                            first_token.lexeme = "";
                            first_token.lexeme = string_append(first_token.lexeme, current_token.lexeme);
                            new_id.pp_tokens[new_id.nullsym++] = first_token;
                        }
                         else {
                            if (new_id.pp_tokens[new_id.nullsym - 1].type == IDENTIFIER) {
                                PP_Token new_token;
                                new_token.type = PP_CODE;
                                new_token.lexeme = "";
                                new_token.lexeme = string_append(new_token.lexeme, current_token.lexeme);
                                new_id.pp_tokens[new_id.nullsym++] = new_token;
                            } else {
                                new_id.pp_tokens[new_id.nullsym - 1].lexeme = string_append(new_id.pp_tokens[new_id.nullsym - 1].lexeme, current_token.lexeme);
                            }
                        }
                        current_token = get_preprocessing_token();
                    
                    }
                    // if (current_token.type == END_OF_FILE) {
                        // printf("`````````````````````` FINAL DE ARCHIVO ````````````````````````\n");
                    // }
                    // printf("New PP_ID with name '%s' and value '%s'", new_id.name, new_id.lexeme);
                    add_ppid_to_symbolTable(new_id);
                    isValidDirective = 1;
                }  else {
                    // printf("MACRO NAME: %s - %d\n", name_token.lexeme, name_token.type);
                    // new_error(filename);
                    // print_error_type_noexit("macro names must be identifiers", "");
                    get_error_line("macro names must be identifiers");
                    
                    
                    while (current_token.type != NEW_LINE && current_token.type != END_OF_FILE) {
                    current_token = get_preprocessing_token();
                    }
                    
                }
            } else {
                // new_error(filename);
                // print_error_type("invalid preprocessing directive #", current_token.lexeme);
                fprintf(temp_file, "#%s", current_token.lexeme);

            }
            // Falta el define
        }
        // if (current_token.type == PP_CODE) {
        //     int char_code = current_token.lexeme[0];
        //     fprintf(temp_file, "%d -> %s\n", char_code, current_token.lexeme);
        // }
        else {
            // if (isValidDirective == 0) { 
            //     printf("writing: %d", current_token.type);
            //     fprintf(temp_file, "%s", current_token.lexeme);
            // } else {
            //     isValidDirective = 0;
            //     puts("newline after preprocessing directive");
            // }
                fprintf(temp_file, "%s", current_token.lexeme);

        }
        current_token = get_preprocessing_token();
    }
    // fclose(fp);
    return;
}

char* process_id (PP_Token current_token) {
    if (get_ppid_value(current_token.lexeme) != NULL) {
        // puts(current_token.lexeme);
        // char *id_value = get_ppid_value(current_token.lexeme);
        PP_ID id = symbolPPTable.pp_ids[get_ppid_idx(current_token.lexeme)];
        char* result = "";
        for (int i = 0; i < id.nullsym; i++) {
            // printf("%d\n", id.pp_tokens[i].type);
            if (id.pp_tokens[i].type == IDENTIFIER && id.pp_tokens[i].lexeme != current_token.lexeme) {
                // return process_id(id.pp_tokens[i]);
                result = string_append(result, process_id(id.pp_tokens[i]));
            } else {
                result = string_append(result, id.pp_tokens[i].lexeme);
            }
        }
        return result;
        // fprintf(new_file, "%s", id_value);
    } else {
        // printf("IDENTIFIER -> %s\n", current_token.lexeme);
        // printf("NO EXISTE: %s\n", current_token.lexeme);
        return current_token.lexeme;
    }
}

void preprocess_defines() {

    FILE *temporal_file = fopen(first_tempfile_name, "r");
    
    new_file_name = malloc(70 * sizeof(char));
    sprintf(new_file_name, "temporal_file%lld.c", (long long) time(NULL));
    new_file = fopen(new_file_name, "w");
    flex_create_buffer(temporal_file);
    PP_Token current_token = get_preprocessing_token();
    // printf("%d -> %s", current_token.type, current_token.lexeme);
    while (current_token.type != END_OF_FILE ) {
        
        if (current_token.type == IDENTIFIER) {
            // printf("IDENTIFIER: %s\n", current_token.lexeme);
            fprintf(new_file, "%s", process_id(current_token));
            // fprintf(new_file, "%s", current_token.lexeme);
            // if (get_ppid_value(current_token.lexeme) == NULL) {
            //     fprintf(new_file, "%s", get_ppid_value(current_token.lexeme));
            // }
            // if (get_ppid_value(current_token.lexeme) != NULL) {
            //     // puts(current_token.lexeme);
            //     char *id_value = get_ppid_value(current_token.lexeme);
            //     fprintf(new_file, "%s", id_value);
            // } else {
            //     // printf("IDENTIFIER -> %s\n", current_token.lexeme);
                   // fprintf(new_file, "%s", current_token.lexeme);
            // }
        } else {
            fprintf(new_file, "%s", current_token.lexeme);
            // printf("LOCO -> %s, %d\n", current_token.lexeme, current_token.type);
        }
        current_token = get_preprocessing_token();
    }
    fclose(temporal_file);
    fclose(new_file);
    remove(first_tempfile_name);
}


PP_Token get_preprocessing_token() {
    PP_Token new_token;
    
    new_token.type = ppf_lex();
    new_token.lexeme = ppf_text;
    // printf("\nSEGFAULT\n");
    return new_token;
}

void preprocessor(char* input_filename) {
    // isValidDirective = false;
    first_tempfile_name = malloc(40 * sizeof(char));
    sprintf(first_tempfile_name, "temp_file%lld.c", (long long) time(NULL));

    symbolPPTable.pp_ids = malloc(128 * sizeof(PP_ID));
    symbolPPTable.nullsym = 0;
    symbolPPTable.size = 128;
    // printf("Preprocessing...\n");
    temp_file = fopen(first_tempfile_name, "w");
    preprocess_file(input_filename, "", 1, 0);
    fclose(temp_file);
    // printf("Cantidad de lineas: %d\n", ppf_lineno);
    preprocess_defines();


    /******** PRUEBA ******** */
    // for (int i = 0 ; i < 1025; i++) {
    //     printf("nullsym: %d\n", symbolPPTable.nullsym);
    //     PP_ID new_id;
    //     char *name = malloc(sizeof(char) * 5);
    //     sprintf(name, "%d", i);
    //     new_id.name = name;
        
    //     char *lexeme = malloc(sizeof(char) * 20);
    //     sprintf(lexeme, "Value%d", i);

    //     new_id.lexeme = lexeme;
    //     // printf("New char: %s\n", hola);
    //     add_ppid_to_symbolTable(new_id);
    //     printf("---------------------------------------\n");

    // }
    // show_symbol_table();

    // exit(0);
    if (symbolPPTable.pp_ids != NULL) {
        free(symbolPPTable.pp_ids);
    }
}