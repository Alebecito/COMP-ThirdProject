# part of the makefile
parserC:  scanner.l parserNuevecito.y
	bison -d -t parserNuevecito.y
	flex scanner.l
	gcc parserNuevecito.tab.c lex.yy.c -lfl -o parserC