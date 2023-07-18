#include <stdio.h>

void swap(int *ival, int *ival2)
{
    int temp = *ival;
    *ival = *ival2;
    *ival2 = temp;
}
int main()
{
    int ival;
    int ival2;

    printf("Please enter 2 integer:\n");
    scanf("%d%d", &ival, &ival2);

    printf("1. number is %d\n2. number is %d\n", ival, ival2);

    swap(&ival,&ival2);
    printf("1. number is %d\n2. number is %d\n", ival, ival2);

    return 0;
}
