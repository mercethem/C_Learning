/**

 Static(compile-time)
 Dynamic (run-time)

 malloc - memory allocation(not formatted and allocate the memory)
 calloc - clearing allocation (formatted and allocate the memory) (unefficient than malloc) (malloc + memset)
 realloc - re-allocation (increase or decrease the memories of used memory)
 free - free memory (free the memory)

 Dynamic duration is while progress is continuing how much memory needed in run time that we say to needed
 So dynamic duration is much memory you need in runtime.
 malloc, calloc, realloc, free are that standard function in C. (allocate and deallocate(free))
 Static duration is ===>  a[100] is compile time problem
 Dynamic will be explain but you have to know that dynamic memory management is not efficiency then static.
 Automatic memory management allocate stack area in memory.
 Dynamic memory management allocate heap(c++ ===> free store) area in memory.
 If you full the heap so warning is memory leak.

 ATTENTION : malloc never do increasing and decreasing!!! If you want to that call the realloc!!!

 DO NOT DO THESE!!!
 1) Never use free for not malloc memories blocs (Undefined behavior)
    char str[100];
    char* p = str;
    free(p);//(UB)

 2) Do not decrease memory blocks with free() (Undefined behavior)
    int* p = (int*)malloc(size * sizeof(int));
    free(p + n / 2); //(UB)

 3) Pointer of memory invalid after free (invalid pointer)
    int* p = (int*)malloc(size * sizeof(int));
    free(p);
    printf("%p", p); //(UB) ===> p is invalid pointer so you can not use this after free!!!

    ATTENTION: p is not NULL pointer after free(p) because that is call by value not call by reference
                free(p) not equal to free(&p) if that is the same calls p can be a NULL pointer! BUT NOT!!!

 4) Do not use free if you want to dereferencing that pointer

    int* p = (int*)malloc(size * sizeof(int));
    int* ptr = p;
    free(p);
    ptr[]; //(UB)

 5) freed memory and again freed is undefined behaviour

    int* p = (int*)malloc(size * sizeof(int));
    int* ptr = p;
    free(p);
    free(ptr);//(UB)

 6) Dynamic allocated memory block had not be freed (Memory leak)
    int* p = (int*)malloc(size * sizeof(int));
    //free(p);

    exit(1);

 */

