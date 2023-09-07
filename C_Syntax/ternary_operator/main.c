#include <stdio.h>
#include <ctype.h>
/**

 Ternary operator is have got three operand.
 op1 ? op2 : op3
 you can use like a operand.
 If you will use return value you can use this but don't use because not practical situation.

 */

int max(int a, int b)
{
return a > b ? a : b;
}

int abs(int a)
{
    return a >= 0 ? a : -a;
}

int toupperr(int c)
{
return c >= 'a' && c <= 'z' ? c - 'a' + 'A' : c;
}

int layer(int a)
{
    int x;

    printf("enter");
    scanf("%d", &a);

    x = a == 5 ? 7 :
        a == 9 ? 13 :
        a == 27 ? : -1;

    printf("x : %d", x);
    return x;
}
