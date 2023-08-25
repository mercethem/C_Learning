#include <stdio.h>
#include <string.h>
#include "mylibrary.h"

#define     SIZE    100


void* mygsearch(const void* vpa, size_t size, size_t sz, const void* vpkey)
{
    const char* p = (const char*)vpa;

    for (size_t i = 0; i < size; ++i) {
        if (!memcmp(p + i * sz, vpkey, sz)) {
            return (char*)(p + i * sz);
        }
    }
    return NULL;
}


int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    print_array(a, SIZE);

    int ival;
    printf("Please enter what do you want to search of value:\n");
    scanf("%d", &ival);

    int* ptr = (int*)mygsearch(a, SIZE, sizeof(*a), &ival);
    if (ptr) {
        printf("Found! Index is : %lld\n", ptr - a);
    }
    else {
        printf("Not Found!");
    }

    return 0;
}
