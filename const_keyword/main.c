/**
 if you use keyword to const, you can not assign this variable's value or array's values!!!
 Logical stables!!!
 const keyword always static and stable so unchangeable if you changed with tricks this is UB!!!!
 Variable uses with keyword to const, you can not use such as ===> a[x] switch's case x:

 (const) int (const) * (const) ptr = &x; ===> It can be three of them
 1- int* const ptr = &x; ===>   const pointer to int (ptr's address not changeable)
                                top-level const
                                but variable of address changeable
                                int x = 10;
                                int y = 20;
                                int* const ptr = &x;
                                *ptr = 98; LEGAL
                                ptr = &y; NOT LEGAL!!!

2-  int const * ptr = &x; ===>  pointer to const int (ptr not changeable)
    const int * ptr = &x; ===>  pointer to const int (ptr not changeable) (most usable)  ===> EQUAL
                                low-level const
                          ===>  *ptr is unchangeable

                                int x = 10;
                                const int* ptr = &x;
                                *ptr = 45; NOT LEGAL!!!
                                int b = *ptr; LEGAL
                                ptr = &y; LEGAL

                                what is the after from cont, it is const
                                ===>    int* const p = &x;      const is p
                                        int contst * p = &x;    const is *p
                                        contst int* p = &x;     const is *p
3- const int* const ptr = &x; const pointer to const int (ptr and ptr's address unchangeable)
                                                            top-level/low-level const


 */

#include <stdio.h>

int main()
{
    const int ival = 45;
    const int arr[] = {0, 1, 2, 3, 51, 762, 6234};

    // ++ival; "You can not use"
    //arr[4] = 56; "You can not use"

    return 0;
}
