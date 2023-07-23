#include <stdio.h>
#include "mylibrary.h"


#define     SIZE    100


void get_min_max2(const int* ptr, int size, int* pmin, int* pmax)
{
    *pmin = *pmax = *ptr;

    for (int i = 1; i < size; ++i) {
        if (ptr[i] > *pmax) {
            *pmax = ptr[i];
        }
        else if (ptr[i] < *pmin) {
            *pmin = ptr[i];
        }
    }
}

int main()
{
    int a[SIZE];
    int min;
    int max;

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    get_min_max2(a, SIZE, &min, &max);
    printf("min = %d\n", min);
    printf("max = %d\n", max);

    return 0;
}
