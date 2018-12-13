CC=gcc
MAKE=make
#CFLAGS=-L. -I. -ltest
ALL:libtest.so main 
main:main.o
	$(CC) $(CFLAGS) main.o -o main
main.o:main.c
	$(CC) $(CFLAGS) -c main.c -o main.o
libtest.so:test.c
	$(CC) -c -fPIC -shared -c test.c -o libtest.so

.PHONY:clean
clean:
	rm -rf main.o main libtest.so
