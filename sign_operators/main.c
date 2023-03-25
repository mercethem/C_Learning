#include <stdio.h>

/**

 +x and -x (Unary prefix operators) these are R Value Expression [But just "x" is L Value Expression]

 +x -> compiler -> x
 -x -> compiler -> (0 - x)

 */

int main(void)
{
    int x;
    printf("Please enter a number :");
    scanf("%d", &x);
    printf("+(%d) = %d\n", x, +x);
    printf("-(%d) = %d\n", x, -x);
    printf("x = %d", x);

    return 0;
}
