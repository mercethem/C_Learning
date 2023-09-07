#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"


#define     URAND_MAX   10


int urand(void)
{
    static int cnt = 0;
    static int flags[URAND_MAX] = {0};
    int val;

    if (cnt == URAND_MAX)
        return -1;

    for (;;) {
        val = rand() % URAND_MAX;
        if (flags[val] == 0)
            break;
    }

    /**
        while(flags[val] = rand() % URAND_MAX])
            ; //null statement
        ++cnt;                                          ===> SAME THING
        flags[val] = 1;
     */
    ++cnt;
    flags[val] = 1;

    return val;
}

int main()
{
    randomize();

    for (int i = 0; i < URAND_MAX; ++i) {
        printf("%d ", urand());
    }
    printf("\n");
    printf("Error value = %d\n", urand());

    return 0;
}
