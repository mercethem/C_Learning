#include <stdio.h>

int factorial (int n)
{
    int result = 1;

    for (int i = 1; i <= n; ++i)
        result *= i;

    return result;
}
//Recursive factorial function
int factorial_2 (int n)
{
    return n < 2 ? 1 : n * factorial_2(n - 1);
}


int main()
{
    int ival;

    printf("Please enter a integer for factorial calculate :");
    scanf("%d", &ival);
    printf("%d", factorial(ival));

    return 0;
}
