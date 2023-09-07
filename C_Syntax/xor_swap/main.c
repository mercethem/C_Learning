#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Please enter 2 integer :\n");
    scanf("%d%d", &x, &y);

    printf("x = %d, y = %d\n", x ,y);

    x ^= y, y ^= x, x ^= y;

    printf("x = %d, y = %d\n", x ,y);



    return 0;
}
