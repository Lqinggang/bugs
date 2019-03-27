#include "atoi_null.h"
#include <stdio.h>

void
atoi_null(void)
{
    char *number = NULL;
//    number = "11";

    printf("%c", 'a' + atoi(number));
}
