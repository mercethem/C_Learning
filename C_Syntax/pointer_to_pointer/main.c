/**
 Pointers uses call by reference and pointer to pointers uses generally
 */

#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    int* ptr = &x; //pointer to int
    int** p = &ptr; //pointer to pointer to int
    // *p equal to ptr
    //**p; ===> Double dereferencing/double indirection

    printf("x = %d\n", x); //10
    **p = 45; //equal to x = 45;
    ++**p;
    /**
     int a[] = {5, 10, 15, 20}; ++*ptr; ===> changed pointer to 5 from pointer to 10
                                ++**ptr ===> 10 ===> 11
     */
    printf("*ptr = %d\n", *ptr); //45
    *p = &y;
    printf("*ptr = %d\n", *ptr); //20



    return 0;
}
