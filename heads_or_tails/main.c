#include <stdio.h>
#include <stdlib.h>

#define         NTOSS       100000000
#define         HEADS       0

int main()
{
    int heads_counter = 0;

    for (int i = 0; i < NTOSS; ++i)
        if(rand() % 2 == HEADS) //Worst method for uniform is mod '%' operator. This example is just for trial
            ++heads_counter;

    printf("Possibility of tails %.12f\n", (double)heads_counter / NTOSS);

    return 0;
}
