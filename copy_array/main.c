#include <stdio.h>
#include "mylibrary.h"


#define     SIZE    100


void copy_array_(const int* psource, int* pdest, int size)
{
//    for (int i = 0; i < size; ++i)    1. Format
//        pdest[i] = psource[i];

//    while(size--){                    2. Format
//        *pdest = *psource;
//        ++pdest;
//        ++psource;
//    }
        while(size--)                   //3. Format
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
