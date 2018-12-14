#include <sys/socket.h>

#define MAXLINE 1024

void dg_echo(int sockfd, struct sockaddr *pcliaddr, socklen_t clilen) 
{
	int n;
	socklen_t len;
	char mesg[MAXLINE];

	for(;;) {
		len = clilen;
		if((n = recvfrom(sockfd, mesg, MAXLINE, 0, pcliaddr, &len)) < 0) {
			perror("recvfrom error");	
			return;
		}
		if(sendto(sockfd, mesg, n, 0, pcliaddr, len) < 0) {
			perror("sendto error");
			return;
		}
	}
}

