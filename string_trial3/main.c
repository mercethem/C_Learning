#include <stdio.h>
#include "mylibrary.h"
#include <ctype.h>

#define     SIZE    500

int main()
{
    char s[SIZE];
    int c;

    printf("Please enter a string\n");
    sgets(s);
    printf("Please enter a character :");
    c = getchar();


    int cnt = 0;
    for (int i = 0; s[i] != '\0'; ++i){
        if(toupper(s[i]) == toupper(c))
            ++cnt;
    }

    printf("Your character is %c and your counter %d", c, cnt);






    return 0;
}
