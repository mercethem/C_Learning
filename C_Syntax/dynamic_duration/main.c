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

 */

