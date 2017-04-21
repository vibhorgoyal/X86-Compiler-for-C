a.out: lex.yy.c y.tab.c y.tab.h info.h info.cxx
	g++ -std=c++11 -w -o ../bin/sym_tab lex.yy.c y.tab.c info.cxx -lfl
	#->>> Type "make run to generate output for all test files"

y.tab.h: grammar.y
	yacc --verbose --debug -d grammar.y 
y.tab.c: grammar.y
	yacc --verbose --debug -d grammar.y 
lex.yy.c: lexer.l y.tab.h
	flex lexer.l

clean: 
	rm a.out y.tab.h y.tab.c lex.yy.c y.output

	
