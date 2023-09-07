//About increment and decrement operators
#include <stdio.h>

/**
    Operand can be prefix of postfix (++x,x++)
    ++x,x++,--x,x-- these operands are have to be L Value Expression.

        | x = y;     |
        | y = y + 1; |
        | x = y++;   |

        | y = y + 1; |
        |x = y;      |
        |x = ++y;    |

    Attention : ++x is expression but ++x; is expression statement and this operand have got side effect

 */

int main()
{
    int x = 5;
    printf("x = %d\n",x);
    ++x;
    printf("x = %d\n",x);
    x++;
    printf("x = %d\n",x);
    x = x + 1;
    printf("x = %d\n",x);
    x += 1;
    printf("x = %d\n",x);

    --x;
    printf("x = %d\n",x);
    x--;
    printf("x = %d\n",x);
    x = x - 1;
    printf("x = %d\n",x);
    x -= 1;
    printf("x = %d\n",x);

    return 0;
}
