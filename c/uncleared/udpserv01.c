/****************************************
   > File Name: udpserv01.c
   > Author: lqinggang
   > Email: 1944058861@qq.com
   > Create Time: Fri 14 Dec 2018 05:11:54 PM CST
****************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>


#define SERV_PORT 12345

int main(int argc,char *argv[])
{
	
	//1. creat a socket 
	int sockfd;
	if((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
		perror("socket error");
		exit(-1);
	}

	//2.servaddr 
	struct sockaddr_in servaddr;
	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = htons(SERV_PORT);

	//3.bind
	if(bind(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr)) < 0) {
		perror("bind error");
		exit(-1);
	}

	struct sockaddr_in cliaddr;
	dg_echo(sockfd, (struct sockaddr *)&cliaddr, sizeof(cliaddr));
}







