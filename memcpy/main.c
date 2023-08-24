#include <stdio.h>
#include <string.h>
#include "mylibrary.h"


#define     SIZE    100


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

    memcpy(d + 20, c, sizeof(int) * 40); // sizeof(a); equal to sizeof a;
    //ATTENTION : memcpy(d + 20, d + 10, sizeof(int) * 40); Undefined Behavior because of RESTRICT keyword!!!!!!
    print_array(c, SIZE);
    print_array(d, SIZE);

    return 0;
}
