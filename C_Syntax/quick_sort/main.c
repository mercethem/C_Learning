/**
 Quick Sort

 TIME COMPLEXITY
 Worst Case = O(n^2)
 Average Case = O(nlog(n))
 Best Case = O(n) ===> (!swap)

 SPACE COMPLEXITY
 O(1)

 */


#include "mylibrary.h"


#define     SIZE    20
#define     PIVOT   last //last or first


void quicksort(int arr[SIZE], int first, int last)
{
    int i;
    int j;
    int pivot = PIVOT;

    if (first < last) {

        i = first;
        j = last;

        while (i < j) {
            while (arr[i] <= arr[pivot] && i < last)
                i++;
            while (arr[j] > arr[pivot])
                j--;
            if (i < j) {
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[pivot], &arr[j]);
        quicksort(arr, first, j - 1);
        quicksort(arr, j + 1, last);
    }
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    quicksort(a, 0, SIZE - 1);
    print_array(a, SIZE);

    return 0;
}

