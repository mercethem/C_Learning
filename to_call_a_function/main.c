//About to call a function.
#include <stdio.h>

int sum2(int a, int b)
{
    int sum2 = a + b;
    return sum2;
}
int main(void)
{
    int result = sum2(5, 2); //sum2(5,2) used for to call a function.
    printf("Result : %d" , result);
    return 0;
}
