# Define required macros here
SHELL = /bin/sh

OBJS =  main.o factorial.o hello.o
CFLAG = -Wall
CC = g++
INCLUDE =
LIBS = -lm

hello:${OBJS}
	${CC} ${CFLAGS} ${INCLUDES} -o hello ${OBJS} ${LIBS}

clean:
	-rm -f *.o *.s *.ii 

test:hello
	./hello 

main.o: main.cpp functions.h
	${CC} ${CFLAGS} ${INCLUDES} -c  main.cpp

factorial.o: factorial.cpp functions.h
	${CC} ${CFLAGS} ${INCLUDES} -c  factorial.cpp

hello.o: hello.cpp
	${CC} ${CFLAGS} ${INCLUDES} -c  hello.cpp

