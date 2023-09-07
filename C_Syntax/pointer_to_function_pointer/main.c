#include <string.h>

int main()
{

    int (*fp)(const void*, const void*) = strcmp;

    int(**fptr)(const void*, const void*) = &fp; //pointer to function pointer

    int (*fa[10])(const void*, const void*);

    return 0;
}
