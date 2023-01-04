#! /bin/bash

CC=gcc
DF= -g
CF= -c

reader:main.o createfifo.o openfile.o readfifo.o init.o
	${CC} -o reader main.o createfifo.o openfile.o readfifo.o init.o


createfifo.o: createfifo.c headers.h declarations.h
	${CC} -c createfifo.c
openfile.o: openfile.c headers.h declarations.h
	${CC} -c openfile.c
readfifo.o: readfifo.c headers.h declarations.h
	${CC} -c readfifo.c
init.o: init.c headers.h declarations.h
	${CC} -c init.c
main.o: main.c headers.h  declarations.h
	${CC} -c main.c

clean: 
	-rm *.o	
	-rm reader
