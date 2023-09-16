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
    int* p_arr;

    printf("How much variable in your array:\n");
    scanf("%zu", &size);

    if((p_arr = (int*)calloc(size, sizeof(int))) == NULL){
    //if(!(p_arr = (int*)calloc(size, sizeof(int))))
        fprintf(stderr,"Memory Failure\n");
        exit(EXIT_FAILURE);
    }

    memset(p_arr, 0, size * sizeof(int));
    print_array(p_arr, size);

    free(p_arr);

    return 0;
}
