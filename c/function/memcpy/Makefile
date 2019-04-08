TARGET=main
CC=gcc
CFLAGS=
LDFLAGS=

SRC= $(wildcard *.c)
OBJS= $(patsubst %.c, %.o, $(SRC))

$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET) $(LDFLAFS)

%.o:%.c
	$(CC) -c $(CFLAGS) $< -o $@ $(LDFLAFS)

.PHONY:clean
clean:
	rm -rf $(OBJS) $(TARGET)
