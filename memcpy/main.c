#include <stdio.h>
#include <string.h>
#include "mylibrary.h"


#define     SIZE    10


int main()
{
    int a[SIZE];
    int b[SIZE] = {0};

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);
    print_array(b, SIZE);

    memcpy(b, a, sizeof a); // sizeof(a); equal to sizeof a;
    print_array(a, SIZE);
    print_array(b, SIZE);

    //------------------------------------------------------------------------

    int c[SIZE];
    int d[SIZE] = {0};

    set_random_array(c, SIZE);
    print_array(c, SIZE);
    print_array(d, SIZE);

    memcpy(d + 2, c, sizeof(int) * 4); // sizeof(a); equal to sizeof a;
    print_array(c, SIZE);
    print_array(d, SIZE);

    return 0;
}
