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


#include "mylibrary.h"


#define     SIZE    10


// Merges two sub-arrays of arr[].
// First subarray is arr[begin..middle]
// Second subarray is arr[middle+1..end]
void merge(int arr[], int begin, int middle, int end)
{
    int i;
    int j;
    int k;

    int idx_1 = middle - begin + 1;
    int idx_2 = end - middle;

    // Create temp arrays
    int L[idx_1], R[idx_2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < idx_1; i++)
        L[i] = arr[begin + i];
    for (j = 0; j < idx_2; j++)
        R[j] = arr[middle + 1 + j];

    // Merge the temp arrays back into arr[begin..end] Initial index of first subarray
    i = 0;

    // Initial index of second subarray
    j = 0;

    // Initial index of merged subarray
    k = begin;
    while (i < idx_1 && j < idx_2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < idx_1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < idx_2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// left_idx is for left index and right_idx is right index of the sub-array of arr to be sorted
void mergeSort(int arr[], int left_idx, int right_idx)
{
    if (left_idx < right_idx) {
        // Same as (left_idx+right_idx)/2, but avoids overflow for large left_idx and h
        int middle_idx = left_idx + (right_idx - left_idx) / 2;

        // Sort first and second halves
        mergeSort(arr, left_idx, middle_idx);
        mergeSort(arr, middle_idx + 1, right_idx);

        merge(arr, left_idx, middle_idx, right_idx);
    }
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    mergeSort(a, 0, SIZE - 1);
    print_array(a, SIZE);

    return 0;
}
