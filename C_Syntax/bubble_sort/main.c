#include <stdio.h>
#include "mylibrary.h"


#define     SIZE    100


void bsort_(int* p, int size)
{
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (p[j] > p[j + 1]) {
                swap(p + j, p + j + 1);
            }
        }
    }
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    bsort_(a, SIZE);
    print_array(a, SIZE);

    return 0;
}
