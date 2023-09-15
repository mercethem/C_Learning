/** strtof, strtod, strtold etc*/


#include <stdio.h>
#include <stdlib.h>


#define     SIZE    100


int main()
{
    char str[SIZE];
    double dval;
    char* p;

    printf("Please enter a string:\n");
    scanf("%s", str);
    printf("(%s)\n", str);

    dval = strtod(str, NULL);
    printf("%f\n", dval);

    dval = strtod(str, &p);
    printf("%f\n", dval);
    printf("idx = %lld\n", p - str);

    return 0;
}
