.PHONY: clean all test
CFLAGS = -Wall -Werror -MP -MMD

all: bin/deposit-calc

bin/deposit-calc: build/main.o build/deposit.o
	gcc $(CFLAGS) build/main.o build/deposit.o -o bin/deposit-calc 

build/main.o: src/main.c src/deposit.h
	gcc $(CFLAGS) -c src/main.c -o build/main.o

build/deposit.o : src/deposit.c src/deposit.h
	gcc $(CFLAGS) -c src/deposit.c -o build/deposit.o

test: 
	make bin/deposit-calc-test
	bin/deposit-calc-test

bin/deposit-calc-test: build/test/deposit_test.o build/test/main.o
	gcc $(CFLAGS) build/test/main.o build/test/deposit.o build/test/deposit_test.o -o bin/deposit-calc-test
	
build/test/main.o: test/main.c src/deposit.h
	@gcc $(CFLAGS) -I thirdparty -c test/main.c -o build/test/main.o 
	@gcc $(CFLAGS) -c src/deposit.c -o build/test/deposit.o 
	
build/test/deposit_test.o: src/deposit.h test/deposit_test.c
	@gcc $(CFlAGS) -c -I thirdparty test/deposit_test.c -o build/test/deposit_test.o
	
build/test/deposit.o: src/deposit.h src/deposit.c
	@gcc $(CFLAGS) -c src/deposit.c -o build/test/deposit.o
	
clean:
	rm -rf bin/deposit-calc-test
	rm -rf bin/deposit-calc
	rm -rf build/*.d build/*.o 
	rm -rf build/test/*.d build/test/*.o
	
-include build/*.d