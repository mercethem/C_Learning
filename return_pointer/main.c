/**
 Never ever never, function of return pointer have not return automatic life pointer!!!
 (Address of stack memory associated with local variable 'x' returned)

 Can be usable
 1- Static pointers!
    a-global variable
    b-static local variables
    c-string literals
 2- Pointer of call by reference
 3- Pointer of dynamic life subject

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
