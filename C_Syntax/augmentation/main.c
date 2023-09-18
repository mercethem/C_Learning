#include <stdio.h>
#include <stdlib.h>

char* itostr(char* pbuf, int val){
    return _itoa(val, pbuf, 10);
}

int main()
{
    char a[10];
    int x = 10;
    char* p = itostr(a,x);
    printf("%s", p);

    return 0;
}
