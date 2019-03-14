#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str;
    str = (char *)malloc(sizeof(char) * 32);

    if (str != NULL)
    {
        sprintf(str, "Hello, World!");
        printf("%s\n",str);

        free(str);
        free(str);  /* double free */
    }
    return (0);
}
