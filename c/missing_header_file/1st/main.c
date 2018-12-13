/****************************************
   > File Name: main.c
   > Author: lqinggang
   > Email: 1944058861@qq.com
   > Create Time: Fri 07 Dec 2018 07:17:18 PM CST
****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
//#include <arpa/inet.h> //missing  header file 

int main(int argc,char *argv[])
{
	char buff[32];

	if(argc != 2) {
		printf("Usage: %s <IPaddress>\n", argv[0]);
	}

	if(inet_ntop(AF_INET, argv[1], buff, sizeof(socklen_t)) == NULL) {
		perror("inet_pton error: ");
		exit(1);
	} 
	printf("address after convert: %s\n", buff);

	return 0;
}
