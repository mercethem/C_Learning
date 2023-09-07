/**
 size_t is about operator of sizeof
 size_t chosen by type alias from compilers!
 unsigned but int or long or long long chosen from by compiler.

 Where do standard libraries use size_t:
 1-Some functions uses value of sizeof for parameter type
 2-Type of array's size
 3-Type of string's length
 4-How much more any type

 ---PRINTF---
 printf("%zu", ...);

*/

#include <stdio.h>
#include <string.h>
#include <inttypes.h>

int main(){
    printf("%zu",sizeof(int32_t));
    return 0;
}