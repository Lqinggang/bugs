/****************************************
   > File Name: dgcliaddr.c
   > Author: lqinggang
   > Email: 1944058861@qq.com
   > Create Time: Fri 14 Dec 2018 06:00:42 PM CST
****************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define MAXLINE 1024

void dg_cli(FILE *fp, int sockfd, const struct sockaddr *pservaddr, socklen_t servlen)
{
	int n;
	char sendline[MAXLINE], recvline[MAXLINE + 1];
	socklen_t len;
	struct sockaddr *preply_addr;

	if(servlen != 0 && (preply_addr = (struct sockaddr *)malloc(servlen)) == NULL) {
		perror("malloc error");
		exit(-1);
	}

	while(fgets(sendline, MAXLINE, fp) != NULL) {

		/*
		 * An error occurred because it was 
		 * not cleared. 
		 */
//		bzero(recvline, MAXLINE); 

		if(sendto(sockfd, sendline, strlen(sendline), 0, pservaddr, servlen) < 0) {
			perror("sendto error");
			exit(-1);
		}
	
		len = servlen;
		if((n = recvfrom(sockfd, recvline, MAXLINE, 0, preply_addr, &len)) < 0) {
			perror("recvfrom error");
			exit(-1);
		}
		if(len != servlen || memcmp(pservaddr, preply_addr, len) != 0) {
			//printf("reply from %s (ignored)\n", Sock_ntop(preply_addr, len));
			continue;
		}
		recvline[0];
		if(fputs(recvline, stdout) == EOF) {
			printf("fputs error");
		}
		
	}

	perror("fgets error");

}

