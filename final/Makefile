all: compile.out

compile: lex.yy.o y.tab.o info.o 
	g++ -std=c++11 lex.yy.o y.tab.o info.o -lfl -o compile

myl.o:	myl.c
	gcc -c myl.c -o myl.o
	
y.tab.o:	y.tab.c
	g++ -std=c++11 -c y.tab.c

lex.yy.o:	lex.yy.c
	g++ -std=c++11 -c lex.yy.c

lex.yy.c:	lexer.l y.tab.c
	flex lexer.l

y.tab.c: 
	yacc --verbose -dtv grammar.y

info.o: info.h info.cxx
	g++ -std=c++11 -c info.cxx

clean:
	rm compile.out compile y.tab.o lex.yy.o lex.yy.c y.tab.c y.tab.h info.o test1.s test2.s test3.s test4.s test5.s test1.out test2.out test3.out test4.out test5.out

run:
	./compile < test1.c > test1.s
	gcc myl.o test1.s -o test1.out
	
	

