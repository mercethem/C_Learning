#include <stdio.h>
#include <time.h>


int main()
{
    time_t timer;
    time(&timer);
    struct tm _tm = *localtime(&timer);

    printf("(%s)",asctime(&_tm));

    return 0;
}
