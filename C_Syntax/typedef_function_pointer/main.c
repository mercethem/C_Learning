#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "mylibrary.h"


typedef int (* FPTR)(const void*, const void*);

typedef int(* FTEST)(int);

void f1(FPTR); //void f1(int (*fp)(const void*, const void*));

void f2(FPTR, FPTR); //void f2(int (*fpx)(const void*, const void*), int (*fpy)(const void*, const void*));

FPTR f3(FPTR, FPTR);
//int (* f3(int (* fpx)(const void*, const void*), int (* fpy)(const void*, const void*)))(const void*, const void*);

int main()
{
    FPTR fp;

    FPTR* fptr = &fp; //pointer to function pointer

    FPTR a[10];
//------------------------------------------------------------------------------------------------------------------

    FTEST fa[] = {&islower, &isupper, &isalpha, &isdigit, &isalnum, &isxdigit, &ispunct,
            &isspace, &isblank, &isgraph, &iscntrl};

    const char* pa[] = {"islower", "isupper", "isalpha", "isdigit", "isalnum", "isxdigit",
            "ispunct", "isspace", "isblank", "isgraph", "iscntrl"};

    int ch;

    printf("Please enter a character:\n");

    ch = getchar();
    for (size_t i = 0; i < asize(fa); ++i) {
        if (fa[i](ch)) { //equal to if((*fa[i])(ch)) and if((*(fa + i))(ch))
            printf("%s test is OK\n", pa[i]);
        }
        else {
            printf("%s test is NOT OKAY\n", pa[i]);
        }
    }

    return 0;
}
