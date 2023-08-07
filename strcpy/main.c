// char* strcpy(char* pdest, const char* psource); returns pointer of pdest!

//ATTENTION:If my string is so long then stackoverflow!
//So dest array size must be enough long to like source array size! (UNDEFINED BEHAVIOR)

#include <stdio.h>
#include "mylibrary.h"
#include <string.h>


#define     SIZE    100

char* mystrcpy(char* pdest, const char* psource)
{
    char* ptemp = pdest;

    while (*psource != '\0') {
        *pdest = *psource;
        ++pdest;
        ++psource;
    }
    *pdest = '\0';

    return ptemp;
}

char* mystrcpy2(char* pdest, const char* psource) //MOST POPULAR IDIOM OF C!!!
{

    while ((*pdest++ = *psource++))
        ; //null statement
    return pdest;
}

int main()
{
    char source[SIZE];
    char dest[SIZE];

    printf("Please enter a string:\n");
    sgets(source);

    mystrcpy2(dest, source);

    printf("(%s) (%s)\n", source, dest);

    return 0;
}
