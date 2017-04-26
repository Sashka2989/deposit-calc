CC = gcc
CFLAGS = -Wall -Werror -MP -MMD

bin/deposit-calc : build/main.o build/deposit.o
	$(CC) $(CFLAGS) build/main.o build/deposit.o -o bin/deposit-calc 

build/main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o

build/deposit.o : src/deposit.c src/deposit.h
	$(CC) $(CFLAGS) -c src/deposit.c -o build/deposit.o 

clean:
	rm -rf bin/deposit-calc
	rm -rf build/*

