# Define required macros here
SHELL = /bin/sh

OBJS =  main.o rowSumOddNumbers.o
CFLAG = -Wall
CC = g++
INCLUDE =

test: main rowSumOddNumbers
	${CC} ${CFLAGS} ${INCLUDES} -o test_rowSumOddNumbers ${OBJS}
	./test_rowSumOddNumbers 

main: main.cpp rowSumOddNumbers.hpp
	${CC} ${CFLAGS} ${INCLUDES} -c  main.cpp 

rowSumOddNumbers: rowSumOddNumbers.cpp
	${CC} ${CFLAGS} ${INCLUDES} -c rowSumOddNumbers.cpp

clean:
	-rm -f *.o *.s *.ii 

