# Define required macros here
SHELL = /bin/sh

OBJS =  main.o isHappyNumber.o
CFLAG = -Wall
CC = g++
INCLUDE =

test: main isHappyNumber
	${CC} ${CFLAGS} ${INCLUDES} -o test_isHappyNumber ${OBJS}
	./test_isHappyNumber 

main: main.cpp isHappyNumber.hpp
	${CC} ${CFLAGS} ${INCLUDES} -c  main.cpp 

isHappyNumber: isHappyNumber.cpp isHappyNumber.hpp
	${CC} ${CFLAGS} ${INCLUDES} -c isHappyNumber.cpp

clean:
	-rm -f *.o *.s *.ii 

