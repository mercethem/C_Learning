//About collatz function
#include <stdio.h>

void print_collatz(unsigned long long n)
{
    while (n != 1) {
        printf("%llu ", n);
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
    }
    printf("1\n");
}

int main()
{
    unsigned long long ival;

    printf("Please enter a integer (doesn't matter how much digit) :");
    scanf("%llu", &ival);
    print_collatz(ival);

    return 0;
}
