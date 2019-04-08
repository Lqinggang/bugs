#include <stdio.h>
#include <string.h>

static void
printf_hello_world(void)
{
    printf("Hello, World!\n");
}

static int 
memcpy_overflow(char *str/*, size_t str_length*/)
{
    const char *test = "This is a test string whose length is greater than the given space size.";
    memcpy(str, test, strlen(test));
//    memcpy(str, test, str_length);
    return (0);
}

int
main(void)
{
    char str[8];
    memcpy_overflow(str);
//    memcpy_overflow(str, sizeof(str));
    printf("str: %s\n", str);
    printf_hello_world();
    return (0);
}
