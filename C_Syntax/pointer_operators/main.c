#include <stdio.h>

/***
    -------------------
    1-  [ ]         ->
    -------------------
    2-  &           *
    -------------------

    NAMES:

    [ ] (subscript/index operator)
    ->  (member selection operator / arrow operator(popular name))
    &   (address of operator)
    *   (dereferencing / indirection)

        ptr ===> pointer
        *ptr ===> pointee
        (You have to address for *, *operand [operand is address])
        The value Address of x is ===> *x
        example ===>    int x = 33;
                        int *p = &x;

                        *p = 77; RESULT: first case is x equal to 33
                                         second case is x equal to 77
    int arr[10] = { 0 };
    int arr2[10] = { 0 };   ===>    a equal to &a[0] so result is p = b;
    int* p = a;                     First value of array is a[0] and address is &a[0] equal to a
    p = b;                          RESULT: a equal to &a[0] (Array decay, array to pointer conversion)

    ARRAY DECAY DON'T USE THIS CASES
    1- sizeof ===> sizeof(a) != sizeof(&a[0]) is TRUE


    if you want to std. printf, C uses conversion specifier is %p(hexadecimal) ===> printf("%p", address);

    example:
    int x = 10;
    int* ptr = &x;

    printf("&x = %p\n", &x); Writes address of x
    printf("ptr = %p\n", ptr); Writes value of ptr it's mean address of x
    printf("&ptr = %p\n", &ptr); Writes address of ptr



 */

int main()
{
    printf("Hello Pointers!\n");
    return 0;
}
