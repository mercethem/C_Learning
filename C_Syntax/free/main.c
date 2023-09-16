/**
 free() is important for discipline of programming because of there is not a garbage collector in C!
 When process finished then allocated memories collection broke but we have to use free() for discipline of programming!

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
        fprintf(stderr,"Memory Failure\n");
        exit(EXIT_FAILURE);
    }

    set_random_array(p_arr, size); //DO NOT USE BEFORE DID NOT ERASE MEMORY
    print_array(p_arr, size);

    free(p_arr); //Work like garbage collector (for not be memory leak)
                        //dangling pointer so after free(p_arr) p_arr invalid pointer now

    return 0;
}
