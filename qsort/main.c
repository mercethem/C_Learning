#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"


#define     SIZE    100


int icmp (const void* vpx, const void* vpy)
{
    int x = *(const int*)vpx;
    int y = *(const int*)vpy;

    return x > y ? 1 : x < y ? -1 : 0;

}

int dcmp (const void* vpx, const void* vpy)
{
    double x = *(const double*)vpx;
    double y = *(const double*)vpy;

    return x > y ? 1 : x < y ? -1 : 0;

}

int main()
{
    int a[SIZE];
    double b[] = {3.4, 1.1, 5.5, -1.2, 25.6, 2.56};

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);
    qsort(a, SIZE, sizeof(int), &icmp);
    print_array(a, SIZE);

    qsort(b, asize(b), sizeof(double), &dcmp);
    for (size_t i = 0; i < asize(b) ; ++i) {
        printf("%f\n", b[i]);
    }

    return 0;
}
