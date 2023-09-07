//About relational operators
#include <stdio.h>

/**

    > (Greater than)    < (Less than)    >= (Greater or equal)   <= (Less or equal)
    == (Equal)          != (Not equal)

    - All of these binary infix operators and left associative
    - There is no side effect and them results are R Value Expression
    - This operators results are not logical like other languages.
    - In C result expression type signed int. True   = int 1
                                              False  = int 0

    Attention = If you use conditional situation with real numbers that you have to use with |d1 - d2| < 0.00000
    because real number is not like integer. Such as int 1 != 1. because 1. like as 1.0000000089
    Consequently do not use conditional operators with use real numbers.


    int a = 5;
    if (10 == a)
        printf("evet doğru\n");       THIS CONDITIONAL EXPRESSION IS NOT FALSE BUT SOME PROGRAMMERS CHOOSE LIKE THAT
    else                              BECAUSE IF PROGRAMMER WRONG THIS WRITING TECHNIQUE PROTECT THEN  = or ==
        printf("hayır değil\n");      KEYBOARD TYPING ERROR



 */

int main()
{

    int x, y;
    printf("Please enter two integer :");
    scanf("%d%d", &x, &y);


    printf("%d <  %d = %d\n", x, y, x <  y);
    printf("%d <= %d = %d\n", x, y, x <= y);
    printf("%d >  %d = %d\n", x, y, x >  y);
    printf("%d >= %d = %d\n", x, y, x >= y);
    printf("%d == %d = %d\n", x, y, x == y);
    printf("%d != %d = %d\n", x, y, x != y);

    printf("sign (%d) = %d\n", x, (x > 0) - (x < 0)); //(for sign control)

    return 0;
}
