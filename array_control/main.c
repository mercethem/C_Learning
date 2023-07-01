#include <stdio.h>
#include "mylibrary.h"

#define     SIZE    1000

int main()
{
    int a[SIZE];
    int b[SIZE];

    set_random_array(a, SIZE);
    set_random_array(b, SIZE);
    print_array(a, SIZE);
    print_array(b, SIZE);


    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                int temp_a = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp_a;
            }

            if (b[j] > b[j + 1])
            {
                int temp_b = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp_b;
            }
        }
    }

    print_array(a, SIZE);
    print_array(b, SIZE);

    int count = 0;
    int c[SIZE];

    for (int i = 0; i < SIZE; ++i)
    {
        if (a[i] == b[i])
        {
            c[count] = a[i];
            ++count;
        }
    }

    int counter = 0;
    for (int k = 0; k < count; ++k)
    {
        if (c[k] != c[k + 1])
        {
            printf("%d ", c[k]);
            ++counter;
        }
    }


    printf("\n%d", counter);

    return 0;
}
