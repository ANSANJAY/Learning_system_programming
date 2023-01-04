#! /bin/bash

CC=gcc
DF= -g
CF= -c

writer:main.o createfifo.o openfile.o writefifo.o init.o
	${CC} -o writer main.o createfifo.o openfile.o writefifo.o init.o


createfifo.o: createfifo.c headers.h declarations.h
	${CC} -c createfifo.c
openfile.o: openfile.c headers.h declarations.h
	${CC} -c openfile.c
writefifo.o: writefifo.c headers.h declarations.h
	${CC} -c writefifo.c
init.o: init.c headers.h declarations.h
	${CC} -c init.c
main.o: main.c headers.h  declarations.h
	${CC} -c main.c

clean: 
	-rm *.o	
	-rm writer
