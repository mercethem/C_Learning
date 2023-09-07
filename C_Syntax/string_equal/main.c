#include <stdio.h>

#define     SIZE    100

int main()
{
    char s1[SIZE];
    char s2[SIZE];

    printf("Please enter 2 word :");
    scanf("%s%s", s1, s2);

    int i = 0;
    int flag = 0;

    while (s1[i] == s2[i])
    {
        if (s1[i] == '\0')
        {
            flag = 1;
            break;
        }
        ++i;
    }

    if (flag == 1)
        printf("Equal\n");
    else
        printf("Not Equal!");

    return 0;
}
