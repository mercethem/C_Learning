/**

 register is a keyword for register memory in CPU.

 */

#include <stdio.h>

int main()
{
    register int x = 10;
    int y = 20;

    printf("register int x : %d\n int y : %d\n", x, y);

    return 0;
}
