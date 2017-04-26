bin/deposit-calc : build/main.o build/deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit-calc -Wall -Werror

build/main.o: src/main.c
	gcc -c src/main.c -o build/main.o -Wall -Werror -MP -MMD

build/deposit.o : src/deposit.c
	gcc -c src/deposit.c -o build/deposit.o -Wall -Werror -MP -MMD

clean:
	rm -rf bin/deposit-calc
	rm -rf build/*

