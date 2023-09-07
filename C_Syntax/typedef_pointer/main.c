#include <stdio.h>

typedef int* IPTR;
typedef const int* CPTR;

int main()
{
    int x = 10;
    int y = 20;
    int a = 10;
    int b = 20;

    const IPTR ptr = &x;
    //int* const ptr =&x;

    *ptr = 40;
    //ptr = &y; SYNTAX ERROR

    CPTR p = &b;
    p = &y;
    //*p = 83; SYNTAX ERROR


    return 0;
}
