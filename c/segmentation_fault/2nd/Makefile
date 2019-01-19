CC=gcc
OBJS=main.o
TAGS=main
ALL:$(OBJS) $(TAGS)
%.o:%.c
	$(CC) -c $< -o $@
%:%.o
	$(CC) $< -o $@
.PHONY:clean
clean:
	rm -rf $(OBJS) $(TAGS)
