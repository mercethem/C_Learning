#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylibrary.h"

#define     SIZE    100

int main()
{
    int ival;

    printf("Plase enter a integer:\n");
    scanf("%d", &ival);

    char str[SIZE];
    int temp = ival;
    int idx = 0;

    while (temp != 0) {
        str[idx++] = temp % 10 + '0';
        temp /= 10;
    }

    str[idx] = '\0';

    _strrev(str);
//    for (int i = 0; i < idx / 2; ++i) {
//        char c = str[i];
//        str[i] = str[idx - 1 - i];
//        str[idx - 1 - i] = c;
//    }
    printf("(%d) (%s)\n", ival, str);

    int ival2;

    char str2[SIZE];

    printf("Plase enter a integer:\n");
    scanf("%d", &ival2);

    /** _itoa(int val, char *buf, int base); */ //atoi, atol, atoll(c99), atof etc.
    _itoa(ival2, str2, 16);
    printf("%s\n", str2);

    _itoa(ival2, str2, 10);
    printf("%s\n", str2);

    _itoa(ival2, str2, 8);
    printf("%s\n", str2);

    _itoa(ival2, str2, 2);
    printf("%s\n", str2);

    return 0;
}
