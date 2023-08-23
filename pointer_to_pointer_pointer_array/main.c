#include <stdio.h>
#include "mylibrary.h"


void print_names(char** pa, size_t size)
{
    for(size_t i = 0; i < size; ++i)
        printf("%s ", pa[i]);

    printf("\n");
}

void print_names2(char** pa, size_t size)
{
    while(size--)
        printf("%s ", *pa++);
    printf("\n");
}

int main()
{
    char* p[] = {"george", "michael", "helen", "eve" };

    print_names(p, asize(p));
    print_names2(p, asize(p));

    return 0;
}
