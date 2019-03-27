#include <stdio.h>
#include <stdlib.h>
#include "segmentation_fault.h"
#include "duplicate.h"
#include "myadd.h"
#include "double_free.h"

int main(void)
{
    char *str = NULL;
//    str = (char *)malloc(sizeof(char) * 3);
    assignment(str);
    printf("%s", str);
//    free(str);

    atoi_null();

    duplicate();

    myadd('a', 'o' - 'a');

    double_free();


    printf("\n");
    return (0);
}
