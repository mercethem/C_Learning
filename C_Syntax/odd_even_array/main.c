#include <stdio.h>
#include "mylibrary.h"

#define     SIZE    20

int main()
{
    int a[SIZE];
    int b[SIZE];

    set_random_array(a, SIZE);
    print_array(a, SIZE);

    int count_odd = SIZE - 1;
    int count_even = 0;

    for (int i = 0; i < SIZE; ++i)
    {
        if (a[i] % 2 == 0)
        {
            b[count_even] = a[i];
            ++count_even;
        }
        if (a[i] % 2 != 0)
        {
            b[count_odd] = a[i];
            --count_odd;
        }
    }

    for (int i = 0; i < SIZE; ++i)
    {
        printf("%d, ", b[i]);
    }

    return 0;
}
