# Define required macros here
SHELL = /bin/sh

OBJS =  Stack.o Queue.o Node.o palindrome.o
CFLAG = -Wall
CC = g++
INCLUDE =
LIBS = 

test:
	make test1
	make test2

test1:
	make palin_test
	./palin_test aba true

test2:
	make palin_test
	./palin_test abc false

palin_test: palin_test.cpp palindrome.o
	${CC} ${CFLAGS} ${INCLUDES} -c palin_test.cpp
	${CC} ${CFLAGS} ${INCLUDES} -o palin_test palin_test.o ${OBJS}

palindrome.o: palindrome.cpp palindrome.hpp Stack.o Queue.o
	${CC} ${CFLAGS} ${INCLUDES} -c  palindrome.cpp

Stack.o: Stack.cpp Stack.hpp Node.o
	${CC} ${CFLAGS} ${INCLUDES} -c Stack.cpp

Queue.o: Queue.cpp Queue.hpp Node.o
	${CC} ${CFLAGS} ${INCLUDES} -c Queue.cpp

Node.o: Node.cpp Node.hpp
	${CC} ${CFLAGS} ${INCLUDES} -c Node.cpp

clean:
	-rm -f *.o 

