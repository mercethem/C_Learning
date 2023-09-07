#include <stdio.h>
#include "mylibrary.h"


#define     SIZE    100


void reverse_array_(int* p, int size)
{
//    for (int i = 0; i < size / 2; ++i) {      1. Format
//        int temp = p[i];
//        p[i] = p[size - i - 1];
//        p[size - i - 1] = temp;
//    }
//    for (int i = 0; i < size / 2; ++i) {      2. Format
//        swap(&p[i], &p[size - i - 1]);
//    }
    for (int i = 0; i < size / 2; ++i) {        //3. Format
        swap(p + i, p + size - 1 - i);
    }
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    reverse_array_(a, SIZE);
    print_array(a, SIZE);

    return 0;
}
