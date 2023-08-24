/**
 Do not use for compare of values because of this function compares memories bites not values!!!!!!!
 But you can equality compare!!!!!!!!!!
 */

#include <stdio.h>
#include <string.h>


#define     SIZE    100


int main()
{
    int a[SIZE] = {1, 2, 3, 4};
    int b[SIZE] = {1, 2, 3, 4};

    if (!memcmp(a, b, sizeof a)) {
        printf("Equal!\n");
    }
    else {
        printf("NOT Equal!\n");
    }

    ++a[2];

    if (!memcmp(a, b, sizeof a)) {
        printf("Equal!\n");
    }
    else {
        printf("NOT Equal!\n");
    }

    return 0;
}
