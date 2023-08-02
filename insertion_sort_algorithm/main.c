/**
 Insertion Sort ===> If you want to use big data than that is bad efficiency

 TIME COMPLEXITY
 Worst Case = O(n^2)
 Average Case = O(n^2)
 Best Case = O(n) ===> (!swap)

 SPACE COMPLEXITY
 O(1)

 */


#include "mylibrary.h"


#define     SIZE    100


void insertion_sort(int arr[], int size)
{

    for (int i = 1; i < size; ++i) {
        int number = arr[i];
        int j;
        for (j = i - 1; j >= 0 && arr[j] > number; --j) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = number;
    }
}


int main()
{
    int arr[SIZE];

    randomize();
    set_random_array(arr, SIZE);
    print_array(arr, SIZE);

    insertion_sort(arr, SIZE);
    print_array(arr, SIZE);

    return 0;
}
