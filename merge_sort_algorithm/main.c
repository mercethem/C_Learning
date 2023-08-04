/**
 Merge Sort ===> Uses Divide and Conqueror, recursive, not linear!
                 In big data nlogn better than n^2

 TIME COMPLEXITY
 Devide = O(1)
 Conquer = 2O(n/2)
 Combine = O(n)

 Worst Case = O(nlong(n))
 Average Case = O(nlog(n))
 Best Case = O(n) ===> (!swap and m = n)

 SPACE COMPLEXITY
 O(1)

 */


#include <stdio.h>
#include "mylibrary.h"

#define     SIZE    100

void merge_sort(int arr[], int p, int r)
{

}

int main()
{

    int a[SIZE];
    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    merge_sort();
    print_array(a, SIZE);

    return 0;
}
