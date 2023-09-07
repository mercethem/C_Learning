#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mylibrary.h"

#define     SIZE    100

int main()
{
    char str[SIZE];
    int sign = 1;
    int ival = 0;
    int i = 0;

    printf("Please enter a integer (String) :");
    sgets(str);

    if (str[0] == '-') {
        i = 1;
        sign = -1;
    }

//    for (; str[i] != '\0'; ++i) {
//        printf("%c %d %d\n", str[i], str[i], str[i] - '0');
//    }

    for (; str[i] != '\0'; ++i) {
        ival = ival * 10 + str[i] - '0';
    }

    ival *= sign;

    printf("ival = %d\n", ival);

    return 0;
}
