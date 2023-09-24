#include  <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"


#define     SIZE    100


char* create_password(void)
{
    size_t len = rand() % 8 + 4;

    char* p = (char*)malloc(len + 1 * sizeof(char));
    if (!p) {
        fprintf(stderr, "Out of memory!");
        exit(EXIT_FAILURE);
    }
    for (size_t i = 0; i < len; ++i) {
        p[i] = rand() % 26 + 'a';
    }

    p[len] = '\0';

    return p;
}

int main()
{
    randomize();
    char* ptr = create_password();

    puts(ptr);

    free(ptr);

    return 0;
}
