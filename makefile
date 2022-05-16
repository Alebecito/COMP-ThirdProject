# part of the makefile
parserC:  scanner.l parserNuevecito.y parserCito.c
	bison -d -t -v parserNuevecito.y
	flex scanner.l
	gcc -g parserNuevecito.tab.c lex.yy.c parserCito.c -lfl -o parserC