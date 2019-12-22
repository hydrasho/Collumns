LIB=-lsfml-graphics -lsfml-system -lsfml-window -lsfml-audio
CC=g++
SRC=*.cpp
APP=APP

all: ${SRC:.c=.o}
			${CC} ${SRC} -o ${APP} ${LIB}

clean:
	rm -rf ${APP}
