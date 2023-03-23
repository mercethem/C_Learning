//About print ASCII corresponding to the number decimal and hexadecimal
#include <stdio.h>

int main()
{

    for (int i = 0; i < 128; ++i)
    {
        printf("%5c %5d",i,i);
        printf("%5c %5x\n",i,i);
    }

    return 0;
}
