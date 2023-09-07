#include <stdio.h>


int main()
{
    printf("char %d\n",sizeof(char));
    printf("char* %d\n\n",sizeof(char*));


    printf("short %d\n",sizeof(short));
    printf("short* %d\n\n",sizeof(short*));

    printf("int %d\n",sizeof(int));
    printf("int* %d\n\n",sizeof(int*));

    printf("long %d\n",sizeof(long));
    printf("long* %d\n\n",sizeof(long*));

    printf("long long %d\n",sizeof(long long));
    printf("long long* %d\n\n",sizeof(long long*));

    printf("double %d\n",sizeof(double));
    printf("double* %d\n\n",sizeof(double*));

    printf("long double %d\n",sizeof(long double));
    printf("long double* %d\n\n",sizeof(long double*));

    printf("float %d\n",sizeof(float));
    printf("float* %d\n\n",sizeof(float*));

    return 0;
}
