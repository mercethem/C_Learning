#include <stdio.h>
#include <string.h>
#include "mylibrary.h"

#define     SIZE    100

void* fill_array(void* vp, size_t size, size_t sz, const void* vpal)
{
    char* p = (char*)vp;
    while (size--) {
        memcpy(p, vpal, sz);
        p += sz;
    }
    return vp;
}

int main()
{
    int a[SIZE];
    int x;

    printf("Please enter a value for fill to array:\n");
    scanf("%d", &x);

    fill_array(a, SIZE, sizeof(*a), &x);
    print_array(a, SIZE);


    return 0;
}
