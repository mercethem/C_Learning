#include <stdio.h>

int* get_array_max(const int* pa, int size);

int main()
{
    int a[5] = { 0 };
    const int primes[] = {2, 3, 5, 7, 11, 13};
    const int x = 10;
    int y = 20;
    int* ptr = &x;
    const int* cp = &y;

    //&x ===> const int*
    //&y ===> int*
    //ptr ===> int*
    //cp ===> const int*
    //a ===> int*
    //primes ===> const int*


    int k = 10;

    const int* p = &k; //const int* = int* ===> LEGAL

    /////////////////////////////////////////////////////////

    const int l = 10;

    int* ptr2 = &l; //WRONGGGG!!! Initializing 'int *' with an expression of type 'const int *' discards qualifiers!!!
                    // Not SYNTAX ERROR but SEMANTIC ERROR in C!!! SYNTAX ERROR in C++!!!
                    //Because (const int*) is not changeable but (int*) is changeable!!!

    *ptr2 = 67; //That the situation is! Undefined Behavior(UB)
}


int* get_array_max(const int* pa, int size){

    //...

    return (int*)pa; //(const cast)that is not implicit, explicit that is!

}