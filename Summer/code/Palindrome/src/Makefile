# Define required macros here
SHELL = /bin/sh

OBJS =  Stack.o Queue.o Node.o palindrome.o
CFLAG = -Wall
CC = g++
INCLUDE =
LIBS = 

test1: test1.cpp palindrome.o
	${CC} ${CFLAGS} ${INCLUDES} -c test1.cpp
	${CC} ${CFLAGS} ${INCLUDES} -o test1 test1.o ${OBJS}
	./test1 aba true
	./test1 abc false

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

