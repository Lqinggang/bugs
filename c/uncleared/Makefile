CC=gcc
TAGS=dg_echo.o dg_cli.o udpcli01.o udpcli01 udpserv01.o udpserv01 
ALL:$(TAGS)
dg_echo.o:dg_echo.c
	$(CC) -c dg_echo.c -o dg_echo.o
dg_cli.o:dg_cli.c
	$(CC) -c dg_cli.c -o dg_cli.o
udpcli01.o:udpcli01.c
	$(CC) -c udpcli01.c -o udpcli01.o
udpcli01:udpcli01.o dg_cli.o
	$(CC) udpcli01.o dg_cli.o -o udpcli01
udpserv01.o:udpserv01.c
	$(CC) -c udpserv01.c -o udpserv01.o
udpserv01:udpserv01.o dg_echo.o
	$(CC) udpserv01.o dg_echo.o -o udpserv01
.PHONY:clean
clean:
	rm -rf $(TAGS)
