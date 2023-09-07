#include <stdio.h>

/**
 TYPDEDEF IS A TYPE AlIAS
 standard convention iptr_t (size_t, int16_t, etc.) not IPTR or Iptr. IPTR or Iptr can usable
 (#define   IPTR    int*) not equal to (typedef int* IPTR)
 ATTENTION: Redeclaration is NOT a STNTAX ERROR

 can bu use this rules
 1- int x;
 2- typedef int x = 10;
 3- typedef int INT;

 example:   1-int a[10];
            2-typedef int a[10];
            3-typedef int INTA10[10];


 typedef can use "const int*, int, char, double, etc."
 */


typedef int* IPTR; //Have got scope rules!!!

int main()
{
    IPTR p1, p2; // Equal to int* p1; int* p2;
    //If (#define   IPTR    int*) Not equal to int* p1, p2; p1 is type of int* but p2 is just type of int!

    return 0;
}
