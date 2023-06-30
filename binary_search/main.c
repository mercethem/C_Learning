#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mylibrary.h"


#define     SIZE        100


int main()
{
    int a[SIZE];
    int sval;

    randomize();
    set_random_array(a, SIZE);
    sort_array(a, SIZE);
    print_array(a, SIZE);

    printf("Please enter search value:");
    scanf("%d", &sval);

    int idx_start = 0;
    int idx_finish = SIZE - 1;
    int idx_mid;

    while (idx_start <= idx_finish)
    {
        idx_mid = (idx_start + idx_finish) / 2;
        if (a[idx_mid] == sval)
            break;

        if (a[idx_mid] > sval)
            idx_finish = idx_mid - 1;
        else
            idx_start = idx_mid + 1;

    }

    if (idx_start > idx_finish)
        printf("Did NOT found searching value\n");
    else
        printf("Found that index is %d\n", idx_mid);

}
