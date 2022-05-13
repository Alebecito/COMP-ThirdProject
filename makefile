# part of the makefile
parserC:  scanner.l parserNuevecito.y
<<<<<<< HEAD
	bison -d -v -t parserNuevecito.y
=======
	bison -d --debug -v parserNuevecito.y
>>>>>>> a123ed85b74705f2a488a881030387c417da6d39
	flex scanner.l
	gcc parserNuevecito.tab.c lex.yy.c -lfl -o parserC