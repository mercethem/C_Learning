#include <stdio.h>

int factorial (int n)
{
    int result = 1;

    for (int i = 1; i <= n; ++i)
        result *= i;

    return result;
}



int main()
{
    int ival;

    printf("Please enter a integer for factorial calculate :");
    scanf("%d", &ival);
    printf("%d", factorial(ival));

    return 0;
}
