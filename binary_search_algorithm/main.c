/**
 Binary Search Algorithm

 */


#include <stdio.h>
#include "mylibrary.h"


#define     SIZE    20


int binarySearch(const int* p, int begin, int size, int x)
{
    while (begin <= size) {
        int mid = begin + (size - begin) / 2;

        if (p[mid] == x)
            return mid;
        if (p[mid] < x)
            begin = mid + 1;
        else
            size = mid - 1;
    }
    return -1;
}

int main(void)
{
    int x;
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    sort_array(a, SIZE);
    print_array(a, SIZE);


    printf("Please enter a integer for search:\n");
    scanf("%d", &x);

    int result = binarySearch(a, 0, SIZE, x);

    if (result != -1)
        printf("Element is found at index %d", result);

    return 0;
}