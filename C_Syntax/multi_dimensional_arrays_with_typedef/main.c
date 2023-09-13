#include <stdio.h>

typedef int INTA10[10];
typedef double* DARRAY[20];

int main()
{
    int a[20][10]; //equal to INTA10 a[20];
    double b[10][20]; //equal to DARRAY b[10];

    return 0;
}
