#include <stdio.h>

/**
        p       q       p and q     p or q      p exor q (exor is bitwise operator)
        T       F          F          T             T
        F       T          F          T             T
        T       T          T          T             F
        F       F          F          F             F

     De Morgan: !(p && q) equal to !p || !q
                !(p || q) equal to !p && !q


     !  (logical not) (unary prefix)[exp. !x = 1/0]
     && (logical and) (binary infix) [Be careful to & because that is bitwise opr. total different from &&]
     || (logical or)

     Logical expression situation: if (expr), while (expr), do while (expr), for (;expr;)
     !expr, exp1 && exp2, exp1 || exp2, [ternary operator] expr ? op2 : op3

     Attention: If type is int so that result TRUE(non-zero [exp. 1,2,10,-1,-12312]) FALSE(zero)

     Attention2: Bitwise operator use bits like     0001 0110
                                                    0010 0101
     if you use bitwise operators like & result     0000 0100 so that result is bitwise result NOT LOGICAL(Be careful)

     Attention3: Short-circuit behavior abouts for logical and, logical or.
     (expr1 && expr2) left expression check first and if that is can usable then that right expression check.
     (expr1 || expr2) left expression check first and if that is can usable and true compiler do not check right expression.
     This situation important for operators that results because of short-circuit behavior.

     int x = 0;
     int y = 4;
     int z = x && ++y;
     printf("z = %d\n",z);
     printf("y = %d\n",y);
     result is 0,9 because ++y not work because of x = 0 and compiler don't control the second expression.

     int x = 2;
     int y = 4;
     int z = x || ++y;
     printf("z = %d\n",z);
     printf("y = %d\n",y);
     result is 1,9 because ++y not work because of x = 2 and compiler don't control the second expression.

     !!!!!!Consequently: (0 && unused expr.) , (1 || unused expr.) As a result the right side operand does not checked!!



     There aren't side effects these operators and result expressions are R Value Expression (exp. !x is R Value Expr.)


 */


int main()
{
    int x;
    printf("Please enter a integer :");
    scanf("%d", &x);

    printf("!(%d) = %d\n", x, !x);
    printf("!!(%d) = %d\n", x, !!x); // !!expr equal to logical expr(exp. !!7 equal to 0, !!-5 equal to 0, !!0 equal to 0 )

    int a, b;
    printf("Please enter two integer :");
    scanf("%d%d", &a, &b);

    printf("(%d) && (%d) = %d\n", a, b, a && b);
    printf("(%d) || (%d) = %d\n", a, b, a || b);


    return 0;
}
