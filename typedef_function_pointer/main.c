#include <stdio.h>
#include <string.h>

typedef int (* FPTR)(const void*, const void*);


void f1(FPTR); //void f1(int (*fp)(const void*, const void*));

void f2(FPTR, FPTR); //void f2(int (*fpx)(const void*, const void*), int (*fpy)(const void*, const void*));

FPTR f3(FPTR, FPTR);
//int (* f3(int (* fpx)(const void*, const void*), int (* fpy)(const void*, const void*)))(const void*, const void*);

int main()
{

    FPTR fp;

    FPTR* fptr = &fp; //pointer to function pointer

    FPTR fa[10];

    return 0;
}
