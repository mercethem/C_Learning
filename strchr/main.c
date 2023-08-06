/**
 String character  strchr(const char*p, int c);
                    strrchr(const char*p, int c); reverse search
 */

#include <stdio.h>
#include <string.h>
#include "mylibrary.h"


#define     SIZE    100


int main()
{
    char s[SIZE];
    char* p;

    printf("Please enter a integer:");
    sgets(s);
    p = strchr(s, 'a');

    if (p != NULL) {
        printf("Found your character and index is %d\n", p - s);
        *p = '*';
        puts(s);
    }
    else {
        printf("Did not found!");
    }

    return 0;
}
