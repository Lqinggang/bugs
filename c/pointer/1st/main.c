#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 在函数里面申请内存时必须在调用函数进行赋值操作
 * (不这么做可能会造成申请的内存地址丢失，从而造成内存泄露)，
 * 不要期望能够通过参数获取到申请的内存的地址，参数只是一个临时
 * 变量，函数调用完就会丢失。
 */ 
char *
hello_world1(char *str)
{
    const char *hello_world = "Hello, World!";
    if ((str = (char *)malloc(strlen(hello_world) + 1)) != NULL)
    {
    	strcpy(str, hello_world);
    }
    return (str);
}

/*
 * 直接对指针参数传进来的内存地址进行操作，必须要保证调用函数中
 * 传进来的参数已经有了正确的内存空间，否则也有可能会出现段错误。
 */
char *
hello_world2(char *str)
{
    const char *hello_world = "Hello, World!";
    strcpy(str, hello_world);
    return (str);
}

int
main(void)
{
    char *str1 = NULL;
    if (hello_world1(str1) != NULL)
    {
        printf("str1: %s\n", str1);
        free(str1);
    }

    char str2[64];
    hello_world2(str2);
    printf("str2: %s\n", str2);

    return (0);
}

