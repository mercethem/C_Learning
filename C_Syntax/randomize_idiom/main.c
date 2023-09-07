/**
  This idiom uses ===> Epoche = 01.01.1970 UNIX

 */

#include <stdio.h>
#include <time.h>


int main()
{
    for(;;)
    printf("%lld\r", time(NULL));


    return 0;
}
