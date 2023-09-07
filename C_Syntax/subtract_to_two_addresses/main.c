/**
    If addresses are part of a array

    address1 > address2
    address1 - address2 = positive integer
    address2 - address1 = negative integer

    (ptr - a) equal to (index)

    Not a difference to know address or index at C/C++
    for example:    index is n so address is a + n
                    address is ptr so index is ptr - a

    but these addresses are not part of a array,  these calculating are meaningless!!!

 */


#include <stdio.h>

int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* p1 = a + 5;
    int* p2 = a + 3;

    printf("%lld\n", p1 - p2);
    printf("%lld\n", p2 - p1);

    return 0;
}
