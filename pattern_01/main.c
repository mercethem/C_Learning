#include <stdio.h>

int main() {

    int number ;

    printf("Please enter a integer for patter :");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {

            printf("%2d ", j);
        }
        printf("\n");
    }

    return 0;
}
