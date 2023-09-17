#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylibrary.h"


#define     SIZE    100


int icmp(const void* vp1, const void* vp2)
{
    return *(const int*)vp1 - *(const int*)vp2;
}

int get_median(const int* p, size_t size)
{
    int* pd = malloc(size * sizeof(int));

    if (!pd) {
        printf("Memory leak!\n");
        exit(EXIT_FAILURE);
    }

    memcpy(pd, p, size * sizeof(int));
    qsort(pd, size, sizeof(*pd), &icmp);
    int retval = pd[size / 2];

    free(pd);

    return retval;
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    int median = get_median(a, SIZE);

    printf("median = %d\n", median);

    exit(EXIT_SUCCESS);
}
