#include "mylibrary.h"


#define     SIZE    100


int* get_array_min(const int* pa, size_t size)
{
    int* pmin = (int*)pa;

    for (size_t i = 0; i < size; ++i) {
        if (pa[i] < *pmin) {
            pmin = (int*)pa + i;
        }
    }
    return pmin;
}

void selection_sort(int* p, size_t size)
{
    for (size_t i = 0; i < size - 1; ++i) {
        swap(get_array_min(p + i, size - i), p + i);
    }
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    selection_sort(a, SIZE);
    print_array(a, SIZE);

    return 0;
}
