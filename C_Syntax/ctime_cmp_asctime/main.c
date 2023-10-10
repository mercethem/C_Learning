/**

 asctime and ctime functions always return same address!!!

 */


#include <stdio.h>
#include <time.h>


int main()
{
    time_t timer;
    time(&timer);
    struct tm _tm = *localtime(&timer);

    printf("(%s)",asctime(&_tm));
    printf("(%p)",asctime(&_tm));

    printf("\n");
    printf("\n");

    printf("(%s)",ctime(&timer));
    printf("(%p)",ctime(&timer));

    return 0;
}
