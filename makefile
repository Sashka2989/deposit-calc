CFLAGS = -Wall -Werror -MP -MMD

all: bin/deposit-calc

bin/deposit-calc: build/main.o build/deposit.o
	gcc $(CFLAGS) build/main.o build/deposit.o -o bin/deposit-calc 

build/main.o: src/main.c src/deposit.h
	gcc $(CFLAGS) -c src/main.c -o build/main.o

build/deposit.o : src/deposit.c src/deposit.h
	gcc $(CFLAGS) -c src/deposit.c -o build/deposit.o

clean:
	rm -rf bin/deposit-calc
	rm -rf build/*

