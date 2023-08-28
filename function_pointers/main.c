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

    int foo(int);
    int func(int);

    int (* fp)(int) = &foo; //equal to ===> int (* fp)(int) = &foo;

    fp = &func; //equal to ===> fp = func;

    int (*fpy)(const char*, const char*) = &strcmp;
    size_t (*fptr)(const char*) = &strlen;
    void (*fpx)(const int*, size_t);

 */


#include <stdio.h>


void function(int x)
{
    printf("Function started x = %d\n", x);
}

int main()
{

    void (* fptrx)(int) = &function;
    fptrx(10);

    return 0;
}