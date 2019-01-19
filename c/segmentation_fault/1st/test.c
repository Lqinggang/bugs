/****************************************
   > File Name: test.c
   > Author: lqinggang
   > Email: 1944058861@qq.com
   > Create Time: Tue 11 Dec 2018 07:46:24 PM CST
****************************************/


#include "test.h"


char *assignment(char *ch)
{
	char *tmp = "this is a string.";
	memcpy(ch, tmp, strlen(tmp));
}
