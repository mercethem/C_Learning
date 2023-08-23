#include <stdio.h>
#include <string.h>
#include "mylibrary.h"


void pcswap(char** p1, char** p2)
{
    char* ptemp = *p1;
    *p1 = *p2;
    *p2 = ptemp;

}

void sort_names2(char** pa, size_t size)
{
    for (size_t i = 0; i < size; ++i) {
        for (size_t k = 0; k < size - 1 - i; ++k) {
            if (strcmp(pa[k], pa[k + 1]) > 0) {
                pcswap(pa + k, pa + k + 1);
            }
        }
    }
}

void sort_names(char** pa, size_t size)
{
    for (size_t i = 0; i < size; ++i) {
        for (size_t k = 0; k < size - 1 - i; ++k) {
            if (strcmp(pa[k], pa[k + 1]) > 0) {
                char* ptemp = pa[k];
                pa[k] = pa[k + 1];
                pa[k + 1] = ptemp;
            }
        }
    }
}

void print_names(char** pa, size_t size)
{
    for (size_t i = 0; i < size; ++i)
        printf("%s ", pa[i]);

    printf("\n");
}

void print_names2(char** pa, size_t size)
{
    while (size--)
        printf("%s ", *pa++);
    printf("\n");
}

int main()
{
    char* p[] = {"george", "michael", "helen", "eve"};

    print_names(p, asize(p));
    print_names2(p, asize(p));
    sort_names(p, asize(p));
    print_names2(p, asize(p));
    sort_names2(p, asize(p));
    print_names2(p, asize(p));

    return 0;
}
