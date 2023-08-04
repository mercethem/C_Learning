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


void merge(int arr[], int begin, int middle, int end)
{
    int i;
    int j;
    int k;

    int idx_1 = middle - begin + 1;
    int idx_2 = end - middle;

    int L[idx_1], R[idx_2];

    for (i = 0; i < idx_1; i++)
        L[i] = arr[begin + i];
    for (j = 0; j < idx_2; j++)
        R[j] = arr[middle + 1 + j];

    i = 0;
    j = 0;
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
    while (i < idx_1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < idx_2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left_idx, int right_idx)
{
    if (left_idx < right_idx) {
        int middle_idx = left_idx + (right_idx - left_idx) / 2;

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
