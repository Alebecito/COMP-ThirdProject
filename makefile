# part of the makefile
parserC:  scanner.l parserNuevecito.y main.c
	bison -d -t -v parserNuevecito.y
	flex scanner.l
	gcc -g parserNuevecito.tab.c lex.yy.c main.c -lfl -o parserC