all: compile.out

compile: lex.yy.o y.tab.o ass6_14CS10022_translator.o 
	g++ lex.yy.o y.tab.o ass6_14CS10022_translator.o -lfl -o compile

myl.o:	myl.c
	gcc -c myl.c
	
y.tab.o:	y.tab.c
	g++ -c y.tab.c

lex.yy.o:	lex.yy.c
	g++ -c lex.yy.c

lex.yy.c:	ass6_14CS10022.l y.tab.c
	flex ass6_14CS10022.l

y.tab.c:	ass6_14CS10022.y
	yacc --verbose -dtv ass6_14CS10022.y

ass6_14CS10022_translator.o: ass6_14CS10022_translator.h ass6_14CS10022_translator.cxx
	g++ -c ass6_14CS10022_translator.cxx

clean:
	rm compile.out compile y.tab.o lex.yy.o lex.yy.c y.tab.c y.tab.h y.output ass6_14CS10022_translator.o test1.s test2.s test3.s test4.s test5.s test1.out test2.out test3.out test4.out test5.out

run:
	./compile < test1.c > test1.s
	gcc myl.o test1.s -o test1.out
	
	

