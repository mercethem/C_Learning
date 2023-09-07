#include  <stdio.h>
#include <math.h>
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

double get_std_dev(const int* p, int size)
{

    double mean = get_mean(p, size);
    double sum_square = 0;

    for (int i = 0; i < size; ++i) {
        sum_square += (p[i] - mean) * (p[i] - mean);
    }


    return sqrt(sum_square / (size - 1));
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    printf("Standard deviation is = %lf\n", get_std_dev(a, SIZE));

    return 0;

}