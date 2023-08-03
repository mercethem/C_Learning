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


int partition(int arr[], int begin, int end)
{
    int pivot = arr[end];
    int i = (begin - 1);

    for (int j = begin; j <= end- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[end]);

    return (i + 1);
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int part_idx = partition(arr, low, high);

        quick_sort(arr, low, part_idx - 1);
        quick_sort(arr, part_idx + 1, high);
    }
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    quick_sort(a, 0, SIZE - 1);
    print_array(a, SIZE);

    return 0;
}

