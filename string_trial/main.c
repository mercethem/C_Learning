#include <stdio.h>

#define     SIZE    100

int main()
{
    char str[SIZE];

    printf("Please enter a string\n");
    scanf("%s",str);

    printf("[%s]\n",str);
    int i;
    for (i = 0; str[i] != '\0' ; ++i)
        ; //null statemen

    str[i] = '!';
    str[i + 1] = '\0';
    printf("[%s]\n",str);

    return 0;
}
