//About get middle term

#include <stdio.h>

int getmid(int a, int b, int c)
{
    if (!(a > b && a > c || a < b && a < c))
        return a;
    if (!(b > a && b > c || b < a && b < c))
        return b;

    return c;
}

int main()
{
    int x, y, z;
    printf("Please enter three integer :");
    scanf("%d%d%d", &x, &y, &z);
    printf("Middle term is : %d\n", getmid(x, y, z));

    return 0;
}
