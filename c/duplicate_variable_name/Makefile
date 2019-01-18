OBJS=main.o
TAGS=main
CC=gcc
ALL:$(OBJS) $(TAGS)
%.o:%.c
	$(CC) -c $(CFLAGS) $< -o $@
%:%.o
	$(CC) $(CFLAGS) $< -o $@
.PHONY:clean
clean:
	rm -rf $(OBJS) $(TAGS)
