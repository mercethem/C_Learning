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
    but there is not UB in unsigned types because they are use modular math
    for example = 1000 * 1000 ---> UB but 1000 * 1000u --->  1_000_000 % 65535
    ch = ival; ---> is NOT UB but that is not true way to use, true way is ---> ival = ch; because of Data Loss!!!
    and if real number changed to integer and want to print that is a UNDEFINED BEHAVIOR

    (20 > 10 ? 10 : 3.) ---> result is double because this conditional 2nd and 3rd conditions do type conversions


    explicit type conversion (type-cast operator) ---> (type) exp. ===> (int)dval/ival  programmer uses that for intent




 */
int main() {
    int x = 0;
    unsigned int y = 1;
    if (x > y)
        printf("Yes true\n"); // ---> because type x changed and x is not 1 now max value of unsigned int!
    if (y > x)
        printf("No wrong\n");

    int a;
    int b;
    printf("Please enter two integer :\n");
    scanf("%d", &a, &b);
    printf("%d\n",a + b);

    char ch = 150; //Becareful that type is char but value is integer!
    if (ch == 150) //This condition is turn char to int!
        printf("150 is right\n");
    else
        printf("WRONG\n");
    return 0;
}
