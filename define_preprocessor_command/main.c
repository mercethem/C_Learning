#include <stdio.h>

#define         MERC        100             //Object-like macros
#define         PUBLIC                      //Like comment places(Preprocessor look inside and delete PUBLIC word)
#define         max2(a, b)      ((a) > (b) ? (a) : (b)) //Function-like macros

#define DEBUG/NDEBUG //----> ifdef or ifndef control and use this conditional ways
#ifdef DEBUG

#endif

#ifndef NDEBUG

#endif

int main() {
    printf("Hello, World!\n");
    return 0;
}
