deposit-calc: main.c
	gcc main.c -o deposit-calc -Wall

clean:
	rm -rf deposit-calc
