A C compiler, implemented using C/C++ with target language MIPS.

Steps for running lexer and parser ->
 
$ cd /src
$ make
$ cd ..
$ ./bin/lexer ./test/test1.c (to execute the lexer on test-case file test1.c)

The parser and lexer are created in bin folder.
To get the image of the constructed tree, run

$ dot -Tpng -O final.txt
and open final.png from home folder.