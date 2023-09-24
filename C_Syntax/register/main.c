/**

 register is memory in cpu.
 register is a keyword for register memory in CPU.
 register use for speed but register memory is not bigger than ram!
 Nowadays have not used much more this keyword because of compiler optimization(modern systems)
    so register is redundant nowadays!

 register can not use for global variables because of registers have not pointer addresses!
 */

#include <stdio.h>

int main()
{
    register int x = 10;
    int y = 20;

    printf("register int x : %d\n int y : %d\n", x, y);

    return 0;
}
