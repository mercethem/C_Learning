#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"


#define     SIZE    100


char* create_password(void) //becarefull if you want to use loop for this func. function always return same pointer!!!
                            //always same last password if you use this function in loop
{
    static char buffer[SIZE];
    size_t len = rand() % 8 + 4;

    for (size_t i = 0; i < len; ++i)
        buffer[i] = rand() % 26 + 'a';

    buffer[len] = '\0';

    return buffer;
}

int main()
{
    randomize();

    char* p = create_password();

    printf("password : (%s)\n", p);

}
