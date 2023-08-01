#include <stdio.h>

#define     SIZE    20

long fibonacci(int n)
{
    if (n < 0)
        return -1; //ERROR

    if (n == 0 || n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2); // 1 1 2 3 5 8 13 21 34 55 89
}

int main()
{
    for (int i = 0; i < SIZE; i++)
        printf("fibonacci(%d)\t\t%5li\n", i, fibonacci(i));

    return 0;
}
