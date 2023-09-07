//About Multiplicative operators(*, /, %)
#include <stdio.h>

/**

    *  multiplication
    /  division (Be careful to losing value of variable)
    %  modulus (Operands can not be real numbers and )
    ATTENTION : / and % operators' second operands can not be ZERO(0) because this is undefined behavior.
    These are binary infix operators. Left to right associativity

 */

int main() {
    int x, y;
    printf("Please enter two integer :");
    scanf("%d%d", &x, &y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    printf("%d %% %d = %d\n", x, y, x % y);

    return 0;
}
