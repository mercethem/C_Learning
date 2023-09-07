#include <stdio.h>

int print_prime_factors(int x)
{
    int val = 2;

    while (x != 1) {
        while (x % val == 0) {
            printf("%d ", val);
            x /= val;
        }
        ++val;
    }
    return 0;
}


int main(void)
{
    int n;

    printf("Please enter a integer :");
    scanf("%d", &n);
    print_prime_factors(n);

    return 0;
}
