#include <stdio.h>

int main(void)
{
    const char *str = "This is a test string";
    char save_str[10];

    sprintf(save_str, "%s", str);

    return (0);
}
