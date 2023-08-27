/**

    There is pointer for function!

    How can do that ?

    1)  int func(int);
        &func; function pointer!!!

    2)  Function to pointer conversion such as array decay (Array to pointer conversion)
        int func(int);
        func; function pointer!!!
    ------------------------------------------------------------------------------------------------

    int func(int);
    double foo(double, double);

    int main()
    {

    &func;      ===> type of func is ===> int (*)(int)
    &foo        ===> type of func is ===> double (*)(double, double)
    &strcmp     ===> type of func is ===> int (*)(const char*, const char*)
    &strlen     ===> type of func is ===> size_t (*)(const char*)

    }

 */


#include <string.h>
#include "mylibrary.h"


int foo(int);
int func(int);

int main()
{
    int (* fp)(int) = &foo; //equal to ===> int (* fp)(int) = &foo;

    fp = &func; //equal to ===> fp = func;

    int (*fpy)(const char*, const char*) = &strcmp;
    size_t (*fptr)(const char*) = &strlen;
    void (*fpx)(const int*, size_t) = &print_array;

    return 0;

}