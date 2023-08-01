#include <stdio.h>
#include "mylibrary.h"


#define     SIZE    100


int* get_array_max(const int* pa, size_t size){

    int* pmax = (int*) pa;

    for (size_t i = 1; i < size ; ++i) {
        if(pa[i] > *pmax)
            pmax = (int*)(pa + i);
            // pmax = (int*) &pa[i]; // Equal
    }

    return (int*)pmax; //(const cast)that is not implicit, explicit that is!
}


int main()
{
    int a[SIZE];
    int* pmax;

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);
    pmax = get_array_max(a, SIZE);

    printf("max = %d, array's index = %lld\n", *pmax, pmax - a);
    *pmax = -1;
    print_array(a, SIZE);
}
