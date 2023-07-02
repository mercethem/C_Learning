#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mylibrary.h"

#define     SIZE    100

int main()
{
    char str[SIZE];
    int x;
    printf("Please enter a integer :");
    scanf("%d", &x);

    int i = 0;
    int temp = x;

    while (temp != 0) {
        str[i++] = temp % 10 + '0';
        temp /= 10;
    }
    str[i] = '\0';

    for (int j = 0; j < i / 2; ++j) {
        char temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }

    printf("[%s]", str);
    return 0;
}
