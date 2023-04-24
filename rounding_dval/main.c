#include <stdio.h>

int main() {

    double dval;

    printf("Please enter a real number [-5,+5]:\n");
    scanf("%lf",&dval);
    printf("%lf ---> %d\n",dval,(int)(dval > 0 ? dval + .5 : dval - .5));

    return 0;
}
