CC=gcc
main:main.o myadd.o
	$(CC) main.o myadd.o -o main
main.o:main.c
	$(CC) -c main.c -o main.o 
myadd.o:myadd.c
	$(CC) -c myadd.c -o myadd.o
.PHONY:clean
clean:
	rm -rf *.o main
