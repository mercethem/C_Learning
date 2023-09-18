#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylibrary.h"


#define     SIZE    100


int main()
{
    char str[SIZE];
    printf("Please enter a sentence:\n");
    sgets(str);

    char* pd = _strdup(str);
    _strrev(pd);
    printf("Real: (%s)\nCopy: (%s)\n", str, pd);
    free(pd);

    return 0;
}
