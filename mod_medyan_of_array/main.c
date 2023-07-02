#include <stdio.h>
#include "mylibrary.h"

#define     SIZE    21


int main()
{
    int a[SIZE];
    int temp;

    set_random_array(a, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        printf("%d ", a[i]);
    }

    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    putline();

    int count = 0;
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%d ", a[i]);
        ++count;
    }
    printf("%d", count);
    printf("\n");

    int medyan;

    if ((count % 2) == 0)
    {
        medyan = (a[(count / 2) - 1] + a[(count / 2)]) / 2;
    }
    else{
        medyan = a[(count - 1) / 2 + 1];
    }
    printf("%d", medyan);
    return 0;
}
