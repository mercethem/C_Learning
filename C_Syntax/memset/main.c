#include <stdio.h>
#include <string.h>
#include "mylibrary.h"


#define     SIZE    20


int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);
    memset(a, 0, sizeof(a));
    print_array(a, SIZE);

    set_random_array(a, SIZE);
    print_array(a, SIZE);
    memset(a + 1, 0, sizeof(int) * 7);
    print_array(a, SIZE);


    char sarr[SIZE] = "EVE HELEN";
    memset(sarr + 5, '*', 4);//equal to ===> memset(sarr + 5, '*', sizeof(char) * 4);
    puts(sarr);
    return 0;
}
