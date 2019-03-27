#include "double_free.h"
#include <stdio.h>
#include <stdlib.h>

void
double_free(void)
{
    char *str;
    str = (char *)malloc(sizeof(char) * 2);

    if (str != NULL)
    {
        sprintf(str, ",");
        printf("%s",str);

        free(str);
        free(str);  /* double free */
    }
}
