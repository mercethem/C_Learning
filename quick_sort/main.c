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
    int pivot = arr[begin]; // pivot
    int i = (begin - 1); // Index of smaller element

    for (int j = begin; j <= end - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quick_sort(int arr[], int low, int high)
{
    if (low < high) {
        /* part_idx is partitioning index, arr[p] is now
        at right place */
        int part_idx = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quick_sort(arr, low, part_idx - 1);
        quick_sort(arr, part_idx + 1, high);
    }
}


void quick_sort2(int arr[], int start, int finish)
{
    int i = start;
    int j = finish;
    int pivot = arr[i];

    do {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }
    while (i < j);
    if (i < finish)
        quick_sort2(arr, i, finish);
    if (start < j)
        quick_sort2(arr, start, j);
}

// Driver program to test above functions
int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    quick_sort(a, 0, SIZE - 1);
    //quick_sort2(a, 0, SIZE - 1);
    print_array(a, SIZE);

    return 0;
}

