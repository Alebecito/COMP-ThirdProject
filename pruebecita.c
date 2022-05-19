







void flex_create_buffer(FILE* file);
void flex_pop_buffer();

extern int ppf_lex();
extern FILE* ppf_in;
extern char* ppf_text;
extern int ppf_lineno;

char* first_tempfile_name;

FILE* open_file(char* directory_path, char* file_name) {
    char* file_path = "";
    file_path = string_append(file_path, directory_path);
    file_path = string_append(file_path, file_name);
    FILE* fptr = fopen(file_path, "r");
    return fptr;
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
        
        if (fptr != NULL) {
            return fptr;
        }
    } 
    for (int i = 0; i < 4; i++) {
        file_path = string_append(file_path, include_paths[i]);
        file_path = string_append(file_path, file_name);
        FILE* fptr = fopen(file_path, "r");
        if (fptr == NULL) {
            
            file_path = "\0";
        } else {
            
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
    for (int i = 0; i < 4; i++) {
        FILE* fptr = open_file(include_paths[i], file_name);
        if (fptr == NULL) {
            
        } else {
            
            return fptr;
        }
    } 
    
    return NULL;
}





























PP_Token ignoreWhitespace(PP_Token token) {
    while(strcmp(token.lexeme, " ") == 0 || strcmp(token.lexeme, "\t") == 0) {
        token = get_preprocessing_token();
    }
    return token;
}

PP_Token ignoreWhitespace2(PP_Token token, int write_to_output) {
    
    while(token.type == WHITESPACE) {
        fprintf(temp_file, "%s", token.lexeme);
        token = get_preprocessing_token();
    }
    return token;
}

void add_ppid_to_symbolTable(PP_ID pp_id) {
    
    
    if (symbolPPTable.nullsym >= symbolPPTable.size ) {    
        
        
        
        symbolPPTable.size *= 2;
        PP_ID* new_symbolTable = realloc(symbolPPTable.pp_ids, symbolPPTable.size * sizeof(PP_ID));
        
        if (new_symbolTable == NULL) {
            new_error_nofile();
            print_error_type("Unable to allocate enough memory for symbol table", "");
        } else {
            symbolPPTable.pp_ids = new_symbolTable;
        }
    }   
    
    int ppid_idx = get_ppid_idx(pp_id.name);
    
    if (ppid_idx == -1) {
        
        symbolPPTable.pp_ids[symbolPPTable.nullsym++] = pp_id;
        
    } else {
        symbolPPTable.pp_ids[ppid_idx].lexeme = pp_id.lexeme;
        
    }
    
    
    
    
}

char* get_ppid_value(char* name) {
    
    for(int i = 0 ; i < symbolPPTable.nullsym; i++){
        if(strcmp(symbolPPTable.pp_ids[i].name, name) == 0)
            return symbolPPTable.pp_ids[i].lexeme;
    }
    return NULL;
}

int get_ppid_idx (char* name) {
    
    for (int i = 0 ; i < symbolPPTable.nullsym; i++){
        
        if (strcmp(symbolPPTable.pp_ids[i].name, name) == 0)
            return i;
    }
    
    return -1;
}

void show_symbol_table() {
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
    
    
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    int size = s1_length + s2_length + 1;
    char *s = calloc(size, sizeof(char));

    
    for (int i = 0; i < s1_length; i++)
        s[i] = s1[i];

    
    for (int i = 0; i < s2_length; i++)
        s[s1_length + i] = s2[i];

    
    s[size - 1] = '\0';

    return s;
}

void new_error_nofile() {
    printf("\033[1;31m"); 
    printf("error: ");
    printf("\033[0m"); 
}

void new_error(char* file_name) {
    printf("%s:%d:", basename(file_name), ppf_lineno);
    printf("\033[1;31m"); 
    printf(" error: ");
    printf("\033[0m"); 
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
    
    int isValidDirective = 0;

    
    FILE *fp;
    
    if (!isAngleBracketFilename) {
        fp = get_quoteinclude_file(filename);
        if (fp == NULL) {

            char *error = malloc(1030);
            if (strcmp(oldFilename, "") == 0) {
                new_error(filename);
                sprintf(error, "No such file or directory: %s", filename);  
                print_error_type(error, "");
            } else {
                new_error(oldFilename);
                sprintf(error, "No such file or directory: %s", filename);  
                print_error_type(error, "");
            }
        };
    } else {
        fp = get_angleinclude_file(filename);
        if (fp == NULL) {
            
            char *error = malloc(1030);
            if (strcmp(oldFilename, "") == 0) {
                new_error(filename);
                sprintf(error, "No such file or directory: %s", filename);  
                print_error_type(error, "");
            } else {
                new_error(oldFilename);
                sprintf(error, "No such file or directory: %s", filename);  
                print_error_type(error, "");
            }
        }
    }

    flex_create_buffer(fp);
    
    
    PP_Token current_token = get_preprocessing_token();
    while (current_token.type != END_OF_FILE) {
        
        
        current_token = ignoreWhitespace2(current_token, 1);
        if (current_token.type == PREPROCESSOR_START) {
            current_token = get_preprocessing_token();
            current_token = ignoreWhitespace(current_token);
            if (current_token.type == IDENTIFIER && strcmp(current_token.lexeme, "include") == 0) {
                current_token = get_preprocessing_token();
                current_token = ignoreWhitespace(current_token);
                if (current_token.type == HEADER_NAME) {
                    printf("HEADER_NAME\n");
                    
                    char *include_filename = malloc(strlen(current_token.lexeme) * sizeof(char));
                    int startsWith_angle_bracket = 0;
                    if (current_token.lexeme[0] == '<') {
                        startsWith_angle_bracket = 1;
                    }
                    char *new_filename = malloc(strlen(current_token.lexeme) * sizeof(char));
                    
                    
                    strcpy(include_filename, current_token.lexeme); 
                    
                    
                    strncpy(new_filename, include_filename + 1, strlen(include_filename) - 2);
                    new_filename[strlen(include_filename) - 2] = '\0';
                    puts(new_filename);
                    

                    current_token = ignoreWhitespace(current_token);
                    current_token = get_preprocessing_token();
                    int has_finished = 0;
                    if (current_token.type == END_OF_FILE) {
                        
                        
                    }
                    else if (current_token.type != NEW_LINE) {
                        
                        new_error(filename);
                        print_error_type("extra tokens at end of #include directive", "");
                    }
                    isValidDirective = 1;
                    if (depthFile == 100) {
                        new_error(filename);
                        print_error_type("#include nested too deeply (max depth is 100)", "");
                    }
                    
                    if (startsWith_angle_bracket) {
                        
                        preprocess_file(new_filename, filename, depthFile + 1, 1);
                    } else {
                        preprocess_file(new_filename, filename, depthFile + 1, 0);
                    }
                    
                    
                    
                    flex_pop_buffer();

                    
                    
                    
                    
                    
                    fprintf(temp_file, "\n");

                    
                    
                    
                    
                } else {
                    new_error(filename);
                    print_error_type("#include expects \"FILENAME\" or <FILENAME>", "");
                }
            } else if (current_token.type == IDENTIFIER && strcmp(current_token.lexeme, "define") == 0) {
                PP_Token name_token = get_preprocessing_token();
                name_token = ignoreWhitespace(name_token);
                

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
                    
                        
                    
                    
                    add_ppid_to_symbolTable(new_id);
                    isValidDirective = 1;
                }  else {
                    
                    new_error(filename);
                    print_error_type_noexit("macro names must be identifiers", "");
                    
                    while (current_token.type != NEW_LINE && current_token.type != END_OF_FILE) {
                    current_token = get_preprocessing_token();
                    }
                    
                }
            } else {
                
                
                fprintf(temp_file, "#%s", current_token.lexeme);

            }
            
        }
        
        
        
        
        else {
            
            
            
            
            
            
            
                fprintf(temp_file, "%s", current_token.lexeme);

        }
        current_token = get_preprocessing_token();
    }
    
    return;
}

char* process_id (PP_Token current_token) {
    if (get_ppid_value(current_token.lexeme) != NULL) {
        
        
        PP_ID id = symbolPPTable.pp_ids[get_ppid_idx(current_token.lexeme)];
        char* result = "";
        for (int i = 0; i < id.nullsym; i++) {
            
            if (id.pp_tokens[i].type == IDENTIFIER && id.pp_tokens[i].lexeme != current_token.lexeme) {
                
                result = string_append(result, process_id(id.pp_tokens[i]));
            } else {
                result = string_append(result, id.pp_tokens[i].lexeme);
            }
        }
        return result;
        
    } else {
        
        
        return current_token.lexeme;
    }
}

void preprocess_defines() {

    FILE *temporal_file = fopen(first_tempfile_name, "r");
    
    new_file_name = malloc(40 * sizeof(char));
    sprintf(new_file_name, "temporal_file%lld.c", (long long) time(NULL));
    new_file = fopen(new_file_name, "w");
    flex_create_buffer(temporal_file);
    PP_Token current_token = get_preprocessing_token();
    
    while (current_token.type != END_OF_FILE ) {
        
        if (current_token.type == IDENTIFIER) {
            
            fprintf(new_file, "%s", process_id(current_token));
            
            
            
            
            
            
            
            
            
            
                   
            
        } else {
            fprintf(new_file, "%s", current_token.lexeme);
            
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
    
    return new_token;
}

void preprocessor(char* input_filename) {
    
    first_tempfile_name = malloc(40 * sizeof(char));
    sprintf(first_tempfile_name, "temp_file%lld.c", (long long) time(NULL));

    symbolPPTable.pp_ids = malloc(128 * sizeof(PP_ID));
    symbolPPTable.nullsym = 0;
    symbolPPTable.size = 128;
    
    temp_file = fopen(first_tempfile_name, "w");
    preprocess_file(input_filename, "", 1, 0);
    fclose(temp_file);
    
    preprocess_defines();


    
    
    
    
    
    
    
        
    
    

    
    
    
    

    
    

    
    if (symbolPPTable.pp_ids != NULL) {
        free(symbolPPTable.pp_ids);
    }
}