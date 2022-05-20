# part of the makefile
parserC:  scanner.l parserNuevecito.y main.c preprocessor.l parserMain.c preprocessor.c
	flex scanner.l
	bison -d -t -v parserNuevecito.y
	flex preprocessor.l
	gcc -g parserNuevecito.tab.c lex.yy.c preprocessor.c preprocessor.yy.c parserMain.c -lfl -o parserC