#include <stdio.h>
#include "mylibrary.h"

#define     SIZE    100

int sum_array(const int* p, int size)
{
    int sum = 0;

    while (size--)
        sum += *p++;

    return sum;
}

double get_mean(const int* p, int size)
{
    return (double)sum_array(p, size) / size;
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    printf("Mean is = %lf\n", get_mean(a, SIZE));

    return 0;

}