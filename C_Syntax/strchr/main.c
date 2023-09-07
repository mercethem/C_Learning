/**
 String character  strchr(const char*p, int c);
                    strrchr(const char*p, int c); reverse search
 */

#include <stdio.h>
#include <string.h>
#include "mylibrary.h"


#define     SIZE    100

char* mystrrchr(const char* p, int c)
{
    const char* pfound = NULL;

    while (*p) {
        if (*p == c)
            pfound = p;
        ++p;
    }
    if (!c)
        return (char*)p;
    return (char*)pfound;
}


int main()
{
    char s[SIZE];
    char* p;
    char* p2;

    printf("Please enter a string:");
    sgets(s);
    p = strchr(s, 'a');
    p2 = mystrrchr(s, 'a');

    if (p2 != NULL) {
        printf("Found your character and index is %zu\n", p2 - s);
        *p2 = '*';
        puts(s);
    }
    else {
        printf("Did not found!");
    }

    return 0;
}
