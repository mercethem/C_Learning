#include <stdio.h>
#include "mylibrary.h"

#define     SIZE    100

int main()
{
    char str[SIZE];

    printf("Please enter a string:\n");
    sgets(str);

    int len = 0;

    for (int i = 0; str[i] != '\0'; ++i)
        ++len;

/**
    int i;
    for (i = 0; str[i] != '\0'; ++i)
        ;//null statenent                                      ===> SAME THING
    printf("String length is : %d\n", len);

 */
    printf("String length is : %d\n", len);

    return 0;
}
