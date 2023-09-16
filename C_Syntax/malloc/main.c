/**

 Uses allocator algorithm
 void* malloc(size_t n); failure result is NULL ===> n is how much more want to bytes (int, double, float, node, etc.)
 If you call malloc you should check the return value!

 */


#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"


int main()
{
    size_t size;

    printf("How much variable in your array:\n");
    scanf("%zu", &size);
    int* p_arr = (int*)malloc(size * sizeof(int));
    if(p_arr == NULL){
        printf("Memory Failure");
        exit(EXIT_FAILURE);
    }

    set_random_array(p_arr, size); //DO NOT USE BEFORE DID NOT ERASE MEMORY
    print_array(p_arr, size);

    free(p_arr);

    /* LINUX FORMAT

    size_t size;
    int* p_arr;

    printf("How much variable in your array:\n");
    scanf("%zu", &size);

    if(p_arr = (int*)malloc(size * sizeof(int))) == NULL){
        printf("Memory Failure");
        exit(EXIT_FAILURE);
    }
}
     */

    return 0;
}
