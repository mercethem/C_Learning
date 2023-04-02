#include <stdio.h>

int main(void)
{

    int number;

    printf("Please enter an integer for draw pattern : ");
    scanf("%d", &number);

    int number2 = number - 1;
    int counter = 0;

    for (int i = 0; i <= number + counter; i++, number--) {
        for (int j = number; j > 0; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%01d ", 0);

        }
        counter++;
        printf("\n");
    }

    int i, j;

    for (i = number2; i >= 1; i--) {

        for (j = i; j <= number2; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%01d ", 0);
        }
        printf("\n");
    }
    return 0;
}
