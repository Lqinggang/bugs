#include "segmentation_fault.h"
#include <string.h>

char *
assignment(char *str)
{
	const char *tmp = "He";
	memcpy(str, tmp, strlen(tmp));
    return (str);
}
