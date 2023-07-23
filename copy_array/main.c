#include <stdio.h>
#include "mylibrary.h"


#define     SIZE    100


void copy_array_(const int* psource, int* pdest, int size)
{
//    for (int i = 0; i < size; ++i)
//        pdest[i] = psource[i];
//    while(size--){
//        *pdest = *psource;
//        ++pdest;
//        ++psource;
//    }
        while(size--)
            *pdest++ = *psource++;
}


int main()
{
    int a[SIZE];
    int b[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    copy_array_(a, b, SIZE);

    print_array(b, SIZE);

    return 0;
}
