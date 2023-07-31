#include "mylibrary.h" //Used for do easily sets and prints array functions

#define     SIZE    100


void func(int arr[], int size)
{
    int min;
    int idx;

    for (int i = 0; i < size; ++i) {
        min = arr[i];
        idx = i;

        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < min) {
                min = arr[j];
                idx = j;
            }
        }

        arr[idx] = arr[i];
        arr[i] = min;
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
