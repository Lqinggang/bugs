EXECNAME=main
OBJS=segmentation_fault.o duplicate.o main.o double_free.o \
	 atoi_null.o #myadd.o  #undefined reference to `myadd' 


CC=gcc
CFLAGS= -L. -I.
LINK=

TAGS:$(OBJS) $(EXECNAME)
$(EXECNAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXECNAME) $(LINK)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(LINK) || exit "$$?"

.PHONY:clean
clean:
	rm -rf *.o $(EXECNAME)
