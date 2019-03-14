#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   printf("atoi(\"12345\") = %d\n", atoi("12345")); 
   printf("The atoi function passing NULL will cause a segmentation fault: \n");
   printf("atoi(NULL) = %d\n", atoi(NULL)); 
   return (0);
}
