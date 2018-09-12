# Define required macros here
SHELL = /bin/sh

OBJS =  main.o fib.o
CFLAG = -Wall
CC = g++
INCLUDE =

test: main fib
	${CC} ${CFLAGS} ${INCLUDES} -o test_fib ${OBJS}
	./test_fib 

main: main.cpp fib.hpp
	${CC} ${CFLAGS} ${INCLUDES} -c  main.cpp 

fib: fib.cpp fib.hpp
	${CC} ${CFLAGS} ${INCLUDES} -c fib.cpp

clean:
	-rm -f *.o *.s *.ii 

