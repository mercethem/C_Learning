#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mylibrary.h"

#define     SIZE        20


int main()
{
    int a[SIZE];

    randomize();
    for(int i = 0; i < SIZE; ++i)
    {
        a[i] = rand() % 20;
        printf("%3d", a[i]);

    }
    printf("\n\n");

    int i;
    int k;

    for(i = 0; i < SIZE; ++i)
    {
        for(k = 0; k < SIZE; ++k)
        {
            if(i != k && a[i] == a[k])
                break;
        }
        if(k == SIZE)
            printf("%3d", a[i]);
    }
    printf("\n");

    return 0;
}
