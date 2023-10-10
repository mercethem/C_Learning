#include <stdio.h>
#include <time.h>
int main()
{
    time_t timer;
    time(&timer);

    printf("(%s)",ctime(&timer));
    timer -= 100000;
    printf("(%s)",ctime(&timer));

    return 0;
}
