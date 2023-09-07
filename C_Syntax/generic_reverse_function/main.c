#include <stdio.h>
#include "mylibrary.h"


void* greverse(void* vp, size_t size, size_t sz)
{
    char* p = (char*)vp;

    for (size_t i = 0; i < size / 2; ++i) {
        gswap(p + i * sz, p + (size - 1 - i) * sz, sz);
    }
    return NULL;
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double b[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};

    greverse(a, 10, sizeof(int));
    greverse(b, asize(b), sizeof(double));

    print_array(a, 10);
    for (size_t i = 0; i < asize(b); ++i) {
        printf("%f ", b[i]);
    }
    return 0;
}
