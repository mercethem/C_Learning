/**
 That is very important end look beautiful function!!!
 */

#include <stdio.h>
#include "mylibrary.h"

#define     SIZE    100


void reverse_copy(int* pdest, const int* psource, int n)
{
    psource += n;

    while (n--){
        *pdest++ = *--psource;
    }
}

int main()
{
    int a[SIZE];
    int b[SIZE];

    randomize();

    set_random_array(a, SIZE);
    print_array(a, SIZE);
    reverse_copy(b, a, SIZE);
    print_array(b, SIZE);

    return 0;
}
