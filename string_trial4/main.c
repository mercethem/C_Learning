#include <stdio.h>
#include "mylibrary.h"
#include <ctype.h>

#define     SIZE    500

int main()
{
    char s[SIZE];
    int cnt[26] = {0};

    printf("Please enter a string\n");
    sgets(s);

    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (isalpha(s[i]))
            ++cnt[toupper(s[i]) - 'A'];

    }

    for (int i = 0; i < 26; ++i)
    {
        if(cnt[i] != 0)
            printf("%c  %d\n",'A' + i, cnt[i]);
    }

    return 0;
}
