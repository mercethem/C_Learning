//About assignment operator and compound assignment operators
#include <stdio.h>

/**

 =
 +=   -=  *= /=  %=
 >>=  <<= &= ^=  |= (bitwise)


 - Binary infix and have got Side Effect
 - exp1 = exp2 ---> exp1 L Value Expression
 - The value produced by the assignment operator is the value assigned to the object, not right value!
   Evidence ---> int ival; double dval = 5.892; ival = dval; result ival is five(5)!
 - Be careful about (int x = 10;) This (=) is not a operator this is a initialisation compound!
 -

 */

int foo()
{
    return 12;
}
int main() {
    int x, y, z, t;
    x = y = z = t = foo();
    printf("x = %d\ny = %d\nz = %d\nt = %d\nfoo() = %d\n", x, y, z, t, foo());

    x += 1;
    printf("x = %d\n",x);
    x -= 1;
    printf("x = %d\n",x);
    x *= 4;
    printf("x = %d\n",x);
    x /= 4;
    printf("x = %d\n",x);
    x %= 3;
    printf("x = %d\n",x);

    return 0;
}
