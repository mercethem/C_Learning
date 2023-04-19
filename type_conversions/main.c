#include <stdio.h>

/**
    implicit type conversion                        ---> compiler do that automatically and we don't see that
    ival = dval; First step is dval changes type int, second step is copy dval to ival and this situation transient
        so temporary!
    long double > double > float
K
    integral promotion : These (unsigned short, short, unsigned char, signed char, char, _Bool) are promotion to int

    unsigned long long, signed long long, unsigned long, signed long, unsigned int, signed int (greater than lesser)
    type ranks ===> long double > double > float > long long > long > int (Attention: same type --> signed = unsigned)

    OVERFLOW FOR INTEGER IS UNDEFINED BEHAVIOR


    explicit type conversion (type-cast operator)   --->



 */
int main() {
    int x = 0;
    unsigned int y = 1;
    if (x > y)
        printf("Yes true\n"); // ---> because type x changed and x is not 1 now max value of unsigned int!
    if (y > x)
        printf("No wrong\n");
    return 0;
    int a;
    int b;
    printf("Please enter two integer :\n");
    scanf("%d", &a, &b);
    printf("%d",a + b);
}
