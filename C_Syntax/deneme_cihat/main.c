#include <stdio.h>

int main()
{
    char val;

    printf("Please enter a char : ");
    scanf("%c", &val);

    if (val == 'e') {
        printf("Success");
    } else { printf("Failed"); }
    return 0;
}
