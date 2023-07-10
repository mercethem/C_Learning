#include <stdio.h>
/**

 You can not type conversion from pointer to primitive types or the exact opposite!!!!!!!!!!!!!!!!!!!!!!!!
 There is not a syntax error but that is WRONG!!!!!!!!


 *p   ===> * is a operator          like ===>  int a[10];  '[]'
 int* ===> * is a declarator        like ===>  a[5] = 10;  '[]'

 */
int main()
{

    int x = 10;
    int* p;
                    // ===> DO NOT USE LIKE THİS!!!
    p = x;

    printf("Hello, World!\n");
    return 0;
}
