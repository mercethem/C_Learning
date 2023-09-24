#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"


#define     SIZE    100


char* create_password(char* p)//sent a pointer write the password that pointer on
{
    size_t len = rand() % 8 + 4;

    for (size_t i = 0; i < len; ++i)
        p[i] = rand() % 26 + 'a';

    p[len] = '\0';
    return p;
}

int main()
{
    char buffer[SIZE];

    randomize();

    create_password(buffer);

    printf("password : (%s)", buffer);


    return 0;
}
