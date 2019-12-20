LIB=-lsfml-graphics -lsfml-system -lsfml-window
CC=g++
SRC=*.cpp
APP=APP

all: ${APP}


${APP}:	 ${SRC:.c=.o}
			${CC} ${SRC} -o ${APP} ${LIB}
