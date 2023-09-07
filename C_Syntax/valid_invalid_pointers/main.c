/**
 Garbage pointers (invalid) ===> int* ptr; If you use UB!!!


 Pointer of taken a address of a value (valid) ===> int x = 10; int* p = &x;
 p is a valid pointer here!

 Pointer taken a finish address of array! (valid) ===> int[5] = {0, 1, 2, 3, 4, 5}; int* p = a + 5;
                                                       int[0] ... int[4]
                                                       int[5] is (a + i) is finish address of array
                                                       you can use but you can not dereferencable!!!
                                                       so ===>  int[5] = {0, 1, 2, 3, 4, 5};
                                                                int* p = a + 5;
                                                                *p; UB!!!
                                                                p[0]; UB!!!

 value of pointer variable is NULL (valid)



 */

#include <stdio.h>

int main()
{
    printf("Hello, World!\n");
    return 0;
}
