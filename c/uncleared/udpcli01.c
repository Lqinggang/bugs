/****************************************
   > File Name: udpcli01.c
   > Author: lqinggang
   > Email: 1944058861@qq.com
   > Create Time: Fri 14 Dec 2018 05:33:56 PM CST
****************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define SERV_PORT 12345

int main(int argc,char *argv[])
{
	if(argc != 2) {
		printf("usage: udpcli01 <IPaddress>");
		exit(-1);
	}

	//1. servaddr
	struct sockaddr_in servaddr;
	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(SERV_PORT);
//	servaddr.sin_port = htons(7);
	int n;
	if((n = inet_pton(AF_INET, argv[1], &servaddr.sin_addr)) < 0) {
		perror("inet_pton error");
		exit(-1);
	} else if(n == 0) {
		printf("format error: %s\n", argv[1]);
		return 0;
	}
	
	//2.create a socket 
	int sockfd;
	if((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
		perror("socket error");
		exit(-1);
	}

	//3. get message from stdin and then send it to server 
	dg_cli(stdin, sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr));

	exit(0);

}
