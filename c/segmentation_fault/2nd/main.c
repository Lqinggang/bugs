/****************************************
   > File Name: s.c
   > Author: lqinggang
   > Email: 1944058861@qq.com
   > Create Time: Sat 19 Jan 2019 06:14:21 PM CST
****************************************/


#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[])
{
    char *str1 = "this is a string";
    char *str2 = "new string";
    strcat(str1, str2);
    printf("%s\n", str1);
    return (0);
}

