/**
 (greenwich time)
 static storage duration
 */

#include <time.h>
#include <stdio.h>

const char* const pdays[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
};

int main()
{
    time_t timer;
    time(&timer);

    struct tm* p = gmtime(&timer);

    printf("%02d-%02d-%d %s %02d:%02d:%02d\n", p->tm_mday, p->tm_mon + 1, p->tm_year + 1900, pdays[p->tm_wday],
           p->tm_hour, p->tm_min, p->tm_sec);

    return 0;
}
