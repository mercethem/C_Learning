// Some control functions
#include <stdio.h>

int iseven (int x)
{
    return x % 2 == 0;
}
int isodd (int x)
{
    return x % 2;
}
int isleap (int y)
{
    return y % 4 == 0 && (y % 400 == 0 || y % 100 != 0 );
}

int main()
{
    int year;
    printf("Please enter a year : \n");
    scanf("%d", &year);
    if (isleap(year))
        printf("%d lead year!\n",year);
    else
        printf("%d not lead year!\n",year);
    return 0;
}
