# part of the makefile
parserC:  scanner.l parserBison.y preprocessor.l parserMain.c preprocessor.c
	flex scanner.l
	bison -d -t parserBison.y
	flex preprocessor.l
	gcc -g parserBison.tab.c lex.yy.c preprocessor.c preprocessor.yy.c parserMain.c -lfl -o parserC