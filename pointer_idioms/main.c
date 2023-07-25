#include <stdio.h>

/**
    &    *    ++    --  (Left from right Associativity)
    Operand of address (&) have to be L Value Expr.. x is L Value Expr. but &x is R Value Expr
    Operand of indirection operator (*) have to be L Value Expr.
    ..++, ++..'s operands L Value Expr. but ++x or x++ are R Value Expr.

    int x = 10;
    int a[5] = {0, 1, 2, 3, 4, 5};
    int* ptr = a;

    &x++, &++x, &--x, &x--; // SYNTAX ERROR!!! Because of these are not L Value Expr. Right way is (&(L_V_Expr.))
    ++&x, --&x, &x++, &x--; // SYNTAX ERROR!!! Because of these are not L Value Expr. Right way is (--(L_V_Expr.))

    *ptr++ = 99; VALID (0 = 99) (*p = 99; p = p + 1;) is equal to (*ptr++ = 99);



 */

void copy_array(int* pdest, const int* psource, int n)
{
    while(n--)
        *pdest++ = *psource++;
}

int main()
{

    int a[5] = {0, 1, 2, 3, 4, 5};
    int b[5] = {0, 11, 22, 33, 44, 55};

    copy_array(a, b, 5);

    for (int i = 0; i < 5; ++i) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
