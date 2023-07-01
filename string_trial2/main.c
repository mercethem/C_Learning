#include <stdio.h>

#define     SIZE    100

int main()
{
    char str1[SIZE];
    char str2[SIZE];
    char str3[SIZE];

    printf("Please enter a string\n");
    scanf("%s%s", str1, str2);

    int i = 0;

    for (i = 0; str1[i] != '\0'; ++i)
        str3[i] = str1[i];

    int j = 0;

    for (j = 0; str2[j] != '\0'; ++j)
        str3[i + j] = str2[j];

    str3[i + j] = '\0';

    printf("[%s] + [%s] = [%s]\n", str1, str2, str3);

    return 0;
}
