#include <stdio.h>
#include <math.h>
#include "mylibrary.h"


#define     SIZE    100


int get_array_max(const int* p, int size)
{
    int max = *p;

    for (int i = 0; i < size; ++i) {
        if (p[i] > max)
            max = p[i];
    }

    return max;
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    printf("Max value of your array : %d\n", get_array_max(a, SIZE));

    return 0;
}