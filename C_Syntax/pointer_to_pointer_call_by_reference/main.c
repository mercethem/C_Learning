#include <stdio.h>


void pswap(int** p1, int** p2)
{
    int* ptemp = *p1;
    *p1 = *p2;
    *p2 = ptemp;
}


int main()
{

    int x = 10;
    int y = 20;

    int* p = &x;
    int* q = &y;

    printf("*p = %d, *q = %d\n", *p, *q);

    pswap(&p, &q);

    printf("*p = %d, *q = %d\n", *p, *q);

    return 0;
}
