all: lexer parser

parser: lex.yy.c y.tab.c parser.o
	 gcc -o ../bin/ast y.tab.c parser.o -lfl

lexer: lex.yy.c y.tab.c lexer.o
	gcc -o ../bin/lexer y.tab.c lexer.o -lfl

lex.yy.c: lexer.l
	flex lexer.l

y.tab.c: grammar.y
	yacc -dtv grammar.y

lexer.o: lexer.c
	gcc -c lexer.c

parser.o: parser.c
	gcc -c parser.c

clean:
	rm y.tab.c y.tab.h ../bin/lexer ../bin/parser lex.yy.c y.output lexer.o parser.o

