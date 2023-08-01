/**
 Never ever never, function of return pointer have not return automatic life pointer!!!
 (Address of stack memory associated with local variable 'x' returned)
 */


#include <stdio.h>


int x = 10;

int* func()     //ATTENTION : if (int x = 10;) inside func so undefined behavior(UB)!!!
{

    return &x;
}

int main()
{
    int* ptr;
    ptr = func();

    printf("%d", *ptr);

    return 0;
}
