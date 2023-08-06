#include <stdio.h>
#include <string.h>
#include "mylibrary.h"


#define     SIZE    100


size_t mystrlen1(const char* p)
{
    size_t len = 0;

    while (*p != '\0'){
        ++p;
        ++len;
    }
    return len;
}

size_t mystrlen2(const char* p)
{
    size_t len = 0;

    while (*p++ != '\0'){
        ++len;
    }
    return len;
}

size_t mystrlen3(const char* p)
{
    const char* ps = p;
    while (*p)
        ++p;

    return p - ps;
}


int main()
{
    //size_t strlen(const char* p); //Length of string
    char str[SIZE];
    printf("Please enter a string:\n");
    sgets(str);
    size_t len = strlen(str);
    size_t mylen = mystrlen3(str);

    printf("Length of string is %zu\n", mylen);
    printf("Length of string is %zu\n", len);

    return 0;
}