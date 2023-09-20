/**

 Uses allocator algorithm
 void* malloc(size_t n); failure result is NULL ===> n is how much more want to bytes (int, double, float, node, etc.)
 If you call malloc you should check the return value!

 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylibrary.h"


int main()
{
    size_t size;
    int* pd;

    printf("How much variable in your array:\n");
    scanf("%zu", &size);


    //pd = (int*)malloc(size * sizeof(int));
    pd = (int*)calloc(size, sizeof(int)); //===> malloc + memset (calloc is very efficiency then malloc + memset)
    if (!pd) {
        fprintf(stderr, "Memory Failure\n");
        exit(EXIT_FAILURE);
    }

    print_array(pd, size);
    free(pd);

    return 0;
}
