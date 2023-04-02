#include <stdio.h>

int main()
{
    int ival;
    double sum = 0.;

    printf("Please enter a integer :");
    scanf("%d", &ival);

    for (int i = 0; i < ival; ++i) {
        if (i % 2 == 0)
            sum += 1. / (2 * i + 1);
        else
            sum -= 1. / (2 * i + 1);
    }

    printf("pi = %.12f\n", 4. * sum);

    return 0;
}
