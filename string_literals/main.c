#include <stdio.h>

/**

 Use only readable to String literal!!! DO NOT USE WRITABLE!!!

 */

int main()
{
    char* p = "table"; //USE const char* p like C++
    *p = 'm'; //UNDEFINED BEHAVIOR(UB)
    p[2] = 'n';//UNDEFINED BEHAVIOR(UB)

    return 0;
}
