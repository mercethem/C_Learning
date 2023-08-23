#include <stdio.h>
#include "mylibrary.h"

#define     SIZE    10

void get_min_max2(const int* pa, size_t size, int** pmin, int** pmax)
{
    *pmin = *pmax = (int*)pa;

    for (size_t i = 1; i < size; ++i) {
        if (pa[i] < **pmin) {
            *pmin = (int*)(pa + i);
        }
        else if (pa[i] > **pmax) {
            *pmax = (int*)(pa + i);
        }
    }
}

int main()
{
    int a[SIZE];
    int* ptr_min;
    int* ptr_max;

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);
    get_min_max2(a, SIZE, &ptr_min, &ptr_max);

    printf("min = %d and index is %lld\n", *ptr_min, ptr_min - a);
    printf("max = %d and index is %lld\n", *ptr_max, ptr_max - a);
    swap(ptr_min, ptr_max);
    print_array(a, SIZE);


    return 0;
}
