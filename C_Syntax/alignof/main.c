/**

 use for alignment requirement

 */


#include <stdio.h>
#include <stdalign.h>


int main()
{
    printf("alignof(char) : %zu byte\n", alignof(char));
    printf("alignof(short) : %zu byte\n", alignof(short));
    printf("alignof(int) : %zu byte\n", alignof(int));
    printf("alignof(long) : %zu byte\n", alignof(long));
    printf("alignof(long long) : %zu byte\n", alignof(long long));
    printf("alignof(float) : %zu byte\n", alignof(float));
    printf("alignof(double) : %zu byte\n", alignof(double));
    printf("alignof(long double) : %zu byte\n", alignof(long double));

    return 0;
}
