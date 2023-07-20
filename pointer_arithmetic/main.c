/**
    an integer can be summed with an address (i + ptr)
    an address can be summed with an integer (ptr + i)
    an address can be subtracted from an integer (ptr - i)
    BUT
    an integer canNOT be subtracted from an address (i - ptr) ILLEGAL!!!

    The result of these processes are address.


 */

#include <stdio.h>

int main()
{
    short arr[15] = { 0 };
    for (int i = 0; i < 15; ++i) {
        printf("%p\n", arr + i);
    }

    return 0;
}
