/**
 Selection Sort Algorithm ===> If you want to use big data than that is bad efficiency

 TIME COMPLEXITY
 Worst Case = O(n^2)
 Average Case = O(n^2)
 Best Case = O(n) ===> (!swap)

 SPACE COMPLEXITY
 O(1)
 */

#include "mylibrary.h" //Used for do easily sets and prints array functions

#define     SIZE    100


void func(int arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        int flag = 0;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[i]) {
                flag++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            if (!flag)
                return;
        }
    }
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    func(a, SIZE);
    print_array(a, SIZE);

    return 0;
}