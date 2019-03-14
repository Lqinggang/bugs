CC=gcc

main:main.o
	$(CC) main.o -o main
main.o:main.c
	$(CC) -c main.c -o main.o

.PHONY:clean
clean:
	rm -rf main.o main
