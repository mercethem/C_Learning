/**

realloc does decrease or increase about allocated memory
realloc(void *vp, size_t newsize) example:  500 + 1500 ===> realloc(pointer, 2000)
                                            500 - 400  ===> realloc(pointer, 100)

 realloc success ===> same memory address
         success ===> new memory address (old address variables copy new address than old address was free)(old address dangling)
         failure ===> NULL Pointer

 ATTENTION: DO NOT USE REALLOC FOR DYNAMIC ADDRESS!!!

 EFFICIENCY ATTENTION: REALLOC TAKES TIME!!!

 */


#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"


int main()
{
    size_t n;
    size_t n_add;

    printf("How much variable in your array:\n");
    scanf("%zu", &n);

    int* pd = (int*)malloc(n * sizeof(int));
    if (!pd) {
        fprintf(stderr, "Memory Failure\n");
        exit(EXIT_FAILURE);
    }
    printf("Address of Malloc : %p\n", pd);

    set_random_array(pd, n);
    print_array(pd, n);

    printf("How much more integer n_add to your array:\n");
    scanf("%zu", &n_add);

    pd = (int*)realloc(pd, (n + n_add) * sizeof(int));
    if (!pd) {
        fprintf(stderr, "Out of memory!\n");
        exit(EXIT_FAILURE);
    }
    printf("Address of Malloc : %p\n", pd);

    set_random_array(pd + n, n_add);
    print_array(pd, n + n_add);

    free(pd);

    return 0;
}
