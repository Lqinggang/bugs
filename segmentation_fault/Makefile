CC=gcc
CFLAGS=-L. -I. -g
main:main.o test.o
	$(CC) $(CFLAGS) main.o test.o -o main
main.o:main.c
	$(CC) $(CFLAGS) -c main.c -o main.o
test.o:test.c
	$(CC) $(CFLAGS) -c test.c -o test.o
.PHONY:clean
clean:
	rm -rf main.o test.o main


