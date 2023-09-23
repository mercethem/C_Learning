/**

 Attention: auto have not used much more nowadays so auto is redundant!
 Meaning is automatic so automatic storage duration
 Can not usable auto keyword in global scope area because of syntax error!

 int x = 10; equal to auto int x = 10;

 */

#include <stdio.h>

int main()
{
    int x = 10;
    auto int y = 20;
    printf("x: %d\ny: %d", x, y);

    return 0;
}
