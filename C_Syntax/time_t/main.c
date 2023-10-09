#include <time.h>
#include <stdio.h>

int main()
{
    time_t timer;
    time(&timer);

    printf("second = %lld\n", timer);
    printf("second = %lld\n", time(NULL));

    for (;;) {
        time(&timer);
        printf("seconds = %lld\r", timer);
    }

    return 0;
}
