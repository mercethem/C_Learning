#include <stdio.h>
#include "mylibrary.h"


#define     SIZE    100


void reverse_array_(int* p, int size)
{
    for (int i = 0; i < size / 2; ++i) {
        int temp = p[i];
        p[i] = p[size - i - 1];
        p[size - i - 1] = temp;
    }
//    for (int i = 0; i < size / 2; ++i) {
//        swap(&p[i], &p[size - i - 1]);
//    }
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
