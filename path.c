// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
extern void preprocessor(char* input_filename);

// int main(int argc, char **argv) {
//     // char sPath[MAXPATH] = "";
//     // char *pTmp;
//     // if (( pTmp = getenv( "DISPLAY" )) != NULL ) {
//     //     strncpy( sPath, pTmp, MAXPATH - 1 );           // Save a copy for our use.
//     //     puts(sPath);
//     //     puts("LOL");
//     // }
//     // else {
//     //     fprintf( stderr, "No PATH variable set.\n") ;
//     // }


// }

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "globals.h"

int main(int argc, char *argv[]) {
    int flags, opt;
    int nsecs, tfnd;

    nsecs = 0;
    tfnd = 0;
    flags = 0;
    includePath = malloc(MAXPATH * sizeof(char));
    quotePath = malloc(MAXPATH * sizeof(char));
    char fileName[MAXPATH] = "";
    char* usageInfo = "Usage: %s [-I include-path] [-q include-path] [-h] file-name\n\n"
                    "-I include-path\t\tPath to be used by the compiler to find include files\n"
                    "-q include-path\t\tPath to be used by the compiler to find include files of the quote form\n"
                    "-h\t\t\tDisplays compiler usage\n"
                    "file-name\t\tName of the file to be compiled\n";
    while ((opt = getopt(argc, argv, "hI:q:")) != -1) {
        switch (opt) {
        case 'I':
            flags = 1;
            strcpy(includePath, optarg);
            break;
        case 'h':
            printf( usageInfo,
                    argv[0]);
            exit(EXIT_SUCCESS);
            break;
        case 'q':     
            strcpy(quotePath, optarg);
            break;
        default: /* '?' */
            fprintf(stderr, 
                    usageInfo,
                    argv[0]);
            exit(EXIT_FAILURE);
        }
    }

    if (optind >= argc) {
        fprintf(stderr, "no input files\n");
        exit(EXIT_FAILURE);
    }
    strcpy(fileName, argv[optind]);
    // printf("name argument = %s\n", fileName);

    /* Other code omitted */

    preprocessor(fileName);


    exit(EXIT_SUCCESS);
}