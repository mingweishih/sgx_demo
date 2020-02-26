CC = gcc
OBJS = main.o guess.o
TARGET = guess

all: ${TARGET}

${TARGET}: ${OBJS}
	${CC} -o $@ $^

.c.o:
	${CC} -c $< -o $@

clean:
	rm -rf ${OBJS} guess
