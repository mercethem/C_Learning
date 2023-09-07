/**

    void pointers can be take any type of pointer, doesn't matter what type of pointer it is!

 */

#include <stdio.h>

int main()
{
    int x = 10;
    char str[] = "helen";
    double dval = 2.3;

    void* vptr = &x; //valid
    int* iptr;
    vptr = str; //valid
    vptr = &dval; //valid
    iptr = vptr; //===> This is valid in C(there is implicit convert)
            // but C++ in invalid (must be in C++===> iptr = (int*)vptr;)
    //ATTENTION : Void pointers can NOT be operand of dereferencing or [] or ++,--
    // any pointer arithmetic can not be use as result as you can not use variable of void pointer


    return 0;
}
