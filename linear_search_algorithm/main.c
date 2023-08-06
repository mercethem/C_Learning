/**

 Linear Search Algorithm

 Complexity ==> O(n)

 */


#include <stdio.h>
#include "mylibrary.h"


#define     SIZE    100

int linear_search(const int* a, int size, int ival)
{
    for (int i = 0; i < size; ++i) {
        if (ival == a[i])
            return i;
    }

    return 0;
}

int main()
{
    int a[SIZE];
    int x;

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    printf("Please enter a integer want to search:");
    scanf("%d", &x);

    x = linear_search(a, SIZE, x); //Success ===> return index; Failed ===> return 0;
    printf("%d", x);

    return 0;
}
