CC=g++
CFLAGS=-Wall -g -I"include/"
LDFLAGS= -lSDL2 -lSDL2_image -lSDL2_ttf
EXEC=bin/Little-AI

all: $(EXEC)

bin/Little-AI : obj/main.o obj/game.o
	$(CC) -o $@ $^ $(LDFLAGS)
	
obj/main.o : src/main.cpp src/game.h
	$(CC) -o $@ -c $< $(CFLAGS)

obj/game.o : src/game.cpp src/game.h
	$(CC) -o $@ -c $< $(CFLAGS)

cleano:
	rm -rf obj/*
clean:
	rm -rf bin/*
	rm -rf obj/*
