/**
 Bubble Sort ===> If you want to use big data than that is bad efficiency
 Worst Case = O(n^2)
 Average Case = O(n^2)
 Best Case = O(n) ===> (!swap)
 */

#include "mylibrary.h"


#define     SIZE    100


void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        int flag = 0;
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] < arr[j]) {
                flag++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        if (!flag)
            return;
    }
}

int main()
{
    int arr[SIZE];

    randomize();
    set_random_array(arr, SIZE);
    print_array(arr, SIZE);

    bubble_sort(arr, SIZE);
    print_array(arr, SIZE);

    return 0;
}
