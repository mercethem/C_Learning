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

    ATTENTION: All sizeof value same of object pointers
               All sizeof value same of function pointers
               sizeof value of function pointers and object pointers can be DIFFERENT!!!

 */


#include <stdio.h>


void function(int x)
{
    printf("Function started x = %d\n", x);
}

void func(void)
{
    printf("Func called!\n");
}

int main()
{
    int* p = NULL;
    void (* fptrx)(int) = &function;
    fptrx(10);

    void (*fp)(void);
    fp = func;
    fp(); //equal to (*fp)();
    (*fp)();

    printf("sizeof(f) = %zu\n", sizeof(fp));
    printf("sizeof(p) = %zu\n", sizeof(p));

    return 0;
}