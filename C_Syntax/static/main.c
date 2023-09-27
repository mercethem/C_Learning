/**
 *
 static have got two different meaning so global scope meaning and local scope meaning
 global static variable - if you use static in global scope your variable do not lose on progress so static storage duration
 local static variable - if you use static in local scope your variable do
 there are just one difference about global static variables and local static variables
 that is difference is globals can be usable anywhere in sourcecode but local ones are just can be usable in local scope!
 ATTENTION : Global static variable is much more open to code warning because of hard to test and
            hard to control in all codes!!!

 */

#include <stdio.h>
#include "mylibrary.h"


void func()
{
    static int x[5] = {0};

    print_array(x, 5);

    for (int i = 0; i < 5; ++i) {
        ++x[i];
    }
}

void func2()
{
    int y[5] = {0};

    print_array(y, 5);

    for (int i = 0; i < 5; ++i) {
        ++y[i];
    }
}

int main()
{
    for (int i = 0; i < 10; ++i) {
        func();
    }
    for (int i = 0; i < 10; ++i) {
        func2();
    }

    return 0;
}
