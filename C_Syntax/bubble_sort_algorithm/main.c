/**
 Bubble Sort ===> If you want to use big data than that is bad efficiency

 TIME COMPLEXITY
 Worst Case = O(n^2)
 Average Case = O(n^2)
 Best Case = O(n) ===> (!swap)

 SPACE COMPLEXITY
 O(1)

 */

#include "mylibrary.h"


#define     SIZE    100


void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i) {
        int flag = 0;
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j + 1] < arr[j]) {
                flag++;
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
        if (!flag)
            break;
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
