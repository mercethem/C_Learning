#include <stdio.h>
#include "mylibrary.h"

#define     SIZE    100

int sum_array(const int* p, int size)
{
    int sum = 0;

//    for (int i = 0; i < SIZE ; ++i) {
//        sum += p[i];
//    }

//    while (size--){
//        sum += *p;
//        ++p;
//    }

    while (size--)
        sum += *p++;

    return sum;
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    printf("Sum is = %d", sum_array(a, SIZE));

    return 0;

}