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
	rm compile.out compile y.tab.o lex.yy.o lex.yy.c y.tab.c y.tab.h info.o Ack.s Ack.out g7.s fib.s oem.s

run:
	./compile < test/Ack.c > Ack.s
	 gcc myl.o Ack.s -o Ack.out 
	./compile < test/greater_than_7.c > g7.s
	 gcc myl.o g7.s -o g7.out 
	./compile < test/iterative_fib.c > fib.s
	 gcc myl.o fib.s -o fib.out 
	./compile < test/odd_even_mutual.c > oem.s
	 gcc myl.o oem.s -o oem.out  
	 ./compile < test1.c > test1.s
	 gcc myl.o test1.s -o test1.out 
	
	

