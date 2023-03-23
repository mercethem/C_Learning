//About print ASCII corresponding to the number decimal and hexadecimal
#include <stdio.h>

int main()
{

    for (int i = 0; i < 128; ++i)
    {
        printf("%5d %5x %5c\n",i,i,i);
    }
    return 0;
}
