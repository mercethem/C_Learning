#include <stdio.h>


#define     SIZE    100


int main()
{
    char str[SIZE] = "HELLO PROGRAMS";

    puts(str);
    puts(str + 4);

    for (int i = 0; i < 14; ++i) {
        puts(str + i);
    }

    return 0;
}
