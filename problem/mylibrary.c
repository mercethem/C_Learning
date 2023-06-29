#include "mylibrary.h"
#include <stdio.h>


int isprime(int val)
{
    if (val == 0 || val == 1)
        return 0;
    if (val % 2 == 0)
        return val == 2;
    if (val % 3 == 0)
        return val == 3;
    if (val % 5 == 0)
        return val == 5;
    for (int i = 7; i * i <= val; i += 2)
        if (val % i == 0)
            return 0;
    return 1;
}

void pline(void)
{
    printf("\n-----------------------------------------------------------------------------------------------------\n");
}

int ndigit(int val)
{
    if (val == 0)
        return 1;
    int digit_count = 0;

    while (val) {
        ++digit_count;
        val /= 10;
    }
    return digit_count;
}

