#include <stdio.h>
#include "mylibrary.h"


#define     SIZE    100


void copy_array_(int* pdest, const int* psource, int n)
{
    while (n--)
        *pdest++ = *psource++;
}


int main()
{
    int a[SIZE];
    int b[SIZE] = {0};

    int idx_a;
    int idx_b;
    int n;

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    printf("Which start from index a:");
    scanf("%d", &idx_a);
    printf("Which start from index b:");
    scanf("%d", &idx_b);
    printf("How much index copy :");
    scanf("%d", &n);

    copy_array_(b + idx_b, a + idx_a, n);
    //copy_array_(b[idx_b], a[idx_a], n);

    print_array(b, SIZE);

    return 0;
}
