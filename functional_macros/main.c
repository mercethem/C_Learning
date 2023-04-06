//This functional macros practical and reduces to cost. Generally uses one-liner functions

#define         max2(a, b)      ((a) > (b) ? (a) : (b))
#include <stdio.h>

int main() {

    int x, y;

    printf("Please enter two integer :");
    scanf("%d%d", &x, &y);

    int max = max2(x, y);

    printf("%d", max);

    return 0;
}
