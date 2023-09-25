/**

 external linkage : a lot of source codes but same global variable or function
                    so if there is a global variable/function and this variable can be usable
                    other source codes that it is
                    Attention: Default is external linkage and if you want to use with external linkage you have to
                    write external notification of variable/function in header file

                    EXAMPLE: mylibrary.h ===> extern int val; //HAVE TO USE extern !!! Undefined Behaviour!!!!!! UB!!!
                             mylibrary.c ===> int val = 10;
                             main.c      ===> extern int val;
                    ATTENTION: If you use a function of extern .h no need extern keyword

 internal linkage : a lot of source codes but different global variable or function
                    so if there is a global variable/function and this variable can not be usable
                    other source codes that it is
                    If you want to use internal linkage than you have to
                        mylibrary.c ===> static int val = 10; or static int func (){}
                        mylibrary.h ===> do not use
                    Attention: static keyword global variables or functions for internal linkage

 nolinkage        : in local scope so there is no linkage.

 */
#include <stdio.h>
#include "mylibrary.h"

//extern int g; // external linkage

int		ndigit(int){ // external linkage
    return 0;
}
int main()
{
    printf("%d\n", g);
    g = 20;
    printf("%d\n", g);
    return 0;
}
