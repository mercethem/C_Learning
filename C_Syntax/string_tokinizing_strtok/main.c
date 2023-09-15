/**
 char* strtok(char* p, const char* p);  Uses in loop first address is string address
                                        second address is not tokenizing character
 */


#include <stdio.h>
#include <string.h>
#include "mylibrary.h"


#define     SIZE    100


int main()
{
    char str[SIZE];
    printf("Please enter a string:\n");
    sgets(str);
    printf("(%s)\n", str);
    int cnt = 0;

    char* p = strtok(str, " .,;!?:"); //first call is string address
    while (p) {
        printf("%2d %s\n", ++cnt, p);
        p = strtok(NULL, " .,;!?:"); //other calls are null pointer
    }

    return 0;
}
