#include <stdio.h>

void f1(int (*ptr_a)[20], size_t size);
void f2(int (*ptr_b)[8], size_t size);
void f3(int (*ptr_c)[4], size_t size);
void f4(int (*ptr_d)[8], size_t size);



int main()
{
    int a[10][20];
    int b[5][8]; /** Same type b and d but them sizes are different*/
    int c[6][4];
    int d[6][8];

    f1(a, 10);
    f2(b, 5);
    f3(c, 6);
    f4(d, 6);

    return 0;

}
