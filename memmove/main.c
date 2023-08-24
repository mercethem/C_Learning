#include <stdio.h>
#include <string.h>

#define     SIZE    100

int main()
{
    char str[SIZE] = "congratulations";

    memmove(str + 4 , str, strlen(str) + 1 /* with null '\0' */ );
    //ATTENTION :  NOT UB like memcpy!!! When you use this function ? If there is overlapped!!!
    puts(str);

    return 0;
}
