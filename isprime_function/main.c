#include <stdio.h>

int isprime (int val)
{

    if (val < 2)
        return 0;

    if (val % 2 == 0)
        return val == 2;

    if (val % 3 == 0)
        return val == 3;

    if (val % 5 == 0)
        return val == 5;

    for (int i = 7; i * i <= val; i += 2) {
        if (val % i == 0)
            return 0;
    }

    return 1;
}

int main(void)
{

    int low, high;
    int prime_count = 0;

    printf("Please enter a range of integer :");
    scanf("%d%d", &low, &high);

    for (int i = low; i < high ; ++i) {
        if (isprime(i)) {
            printf("%d " , i);
            ++prime_count;
        }
    }

    printf("\nThere are %d prime numbers in range of [%d - %d]\n", prime_count, low, high);
    return 0;
}
