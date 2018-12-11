/****************************************
   > File Name: main.c
   > Author: lqinggang
   > Email: 1944058861@qq.com
   > Create Time: Tue 11 Dec 2018 07:43:44 PM CST
****************************************/


#include <stdio.h>
#include <stdlib.h>
#include "test.h"


int main(int argc,char *argv[])
{
	char *ch;
//1.
//	ch = (char *) malloc(sizeof(char) * 20); 
//2.
//	ch = (char *) malloc(sizeof(char) * 5);
	assignment(ch);
	printf("%s\n", ch);
	return (0);
}
