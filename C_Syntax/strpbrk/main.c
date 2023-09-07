//char* strpbrk(const char* psource, const char* pchars);


#include <stdio.h>
#include "mylibrary.h"
#include <string.h>


#define     SIZE    100


int main()
{
    char str[SIZE];
    char s[] = "aeou";

    printf("Please enter a string:\n");
    sgets(str);

    char* p = strpbrk(str, s);

    if (p) {
        printf("Found! Index is %lld\n", p - str);
        *p = '!';
        puts(str);
    }
    else {
        printf("UNFOUNDED!");
    }
    return 0;
}
