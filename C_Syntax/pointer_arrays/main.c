#include <stdio.h>

/**

 int a = 10;
 int b = 20;
 int c = 30;

 int main()
 {
    int* const p[] = {&a, &b, &c}; //const use for &a, &b, &c so &a, &b, &c are unchangeable but
                                     a, b, c changeable
                                     RESULT
                                     ------
                                     p[1] = &x; INVALID
                                     a = 60; VALID

    const int* p[] = {&a, &b, &c}; //const use for p[]! so &a, &b, &c are const int*
    int const* p[] = {&a, &b, &c}; //const use for p[]! so &a, &b, &c are const int*
    RESULT
    ------
    int ival = *p[1]; VALID
    *p[1] = 99; INVALID



 }


 */
int main()
{
    int x = 1;
    int y = 2;
    int z = 4;
    int t = 7;

    int* arr[] = {&x, &y, &z, &t}; //pointer array
    // arr[0] equal to *arr so if you use **arr = 77 result is a = 77!!!
    //**arr ===> Double Dereferencing or Double Indirection


    int a[] = {2, 4, 6, 8};
    int b[] = {1, 3, 5, 7};
    int c[] = {10, 20, 30};

    int* p[] = {a, b, c};
    printf("%d\n", p[1][2]);
    p[1][2] = 77; //p[1] is index 1 so that is array b and p[1][2] is index 2 of array b. Result is 5 changed to 77!
    printf("%d\n", p[1][2]);


    ++p[2]; //iter on index 1 of array c so 20
    ++*p[2]; //20 increase 1 and result is 21 so ===> c[] = {10, 21, 30}

    return 0;
}
