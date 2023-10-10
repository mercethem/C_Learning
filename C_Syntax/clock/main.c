/**

 clock_t clock(void);
 clock tick!!!

 CLOCK_PER_SEC


 */


#include <stdio.h>
#include <time.h>
#include "mylibrary.h"


#define     SIZE    500000


int main()
{
    int a[SIZE];

    clock_t start = clock();
    set_random_array(a, SIZE);
    sort_array(a, SIZE);
    clock_t end = clock();

    printf("Sorting is over - %f sec\n", (double)(end - start) / CLOCKS_PER_SEC);
    getchar();

    return 0;
}
