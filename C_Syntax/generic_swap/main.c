#include <stdio.h>

//This GENERIC function is use with same types not different types (int-int, char-char)
void gswap(void* vp1, void* vp2, size_t size)
{
    char* p1 = (char*)vp1;
    char* p2 = (char*)vp2;

    while (size--) {
        char temp = *p1;
        *p1++ = *p2;
        *p2++ = temp;
    }
}

int main()
{
    int ival1 = 5;
    int ival2 = 10;
    printf("ival1 = %d, ival2 = %d\n", ival1, ival2);
    gswap(&ival1, &ival2, sizeof(int));
    printf("ival1 = %d, ival2 = %d\n", ival1, ival2);

    return 0;
}
