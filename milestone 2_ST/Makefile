a.out: lex.yy.c y.tab.c y.tab.h info.h info.cxx
	g++ -std=c++14 lex.yy.c y.tab.c info.cxx -lfl
	#->>> Type "make run to generate output for all test files"

y.tab.h: grammar.y
	yacc -dtv grammar.y 
y.tab.c: grammar.y
	yacc -dtv grammar.y 
lex.yy.c: lexer.l y.tab.h
	flex lexer.l

clean: 
	rm a.out y.tab.h y.tab.c lex.yy.c y.output

	
