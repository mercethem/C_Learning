//This functional macros practical and reduces to cost. Generally uses one-liner functions

#include <stdio.h>
#include "nutility.h"

int main() {

    int x, y;

    printf("Please enter two integer :");
    scanf("%d%d", &x, &y);

    int max = max2(x, y);

    printf("%d", max);

    return 0;
}
