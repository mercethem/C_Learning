/**
    operand1[operand2] ==>  *(operand1 + operand2) so result is address
    operant2[operand1]      One of them address other one integer
                            a[i] equal to *(a + i) and i[a] equal to *(i + a)
                            &ptr[i] equal to ptr + n

                            int x = 10;
                            (&x)[0] = 23;
                            *(&x + 0) = 23;
                            printf("x = %d\n", x); // x = 23

                            int x = 10;
                            int* ptr = &x;
                            ptr[0] = 87;
                            printf("x = %d\n", x); // x = 87

                            int x = 10;
                            int* ptr = &x;
                            *ptr = 98;
                            printf("x = %d\n", x); // x = 98

                            int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
                            int* ptr = a + 5;
                            printf("x = %d\n", *ptr); // x = 5
                            printf("x = %d\n", ptr[0]); // x = 5
                            printf("x = %d\n", ptr[3]); // x = 8
                            printf("x = %d\n", ptr[-3]); // x = 2
                            printf("x = %d\n", 3[ptr]); // x = 8
                            printf("x = %d\n", -3[ptr]); // x = 2


                            if int* ptr = a; or
                            printf("x = %d\n", ptr[-3]); // UB!!!
                            printf("x = %d\n", ptr[+30]); // UB!!!

*/

#include <stdio.h>

int main()
{

    return 0;
}
