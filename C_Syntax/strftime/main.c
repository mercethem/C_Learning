/**

 strftime : string format time!
 strftime is a local dependent function.

 size_t strftime(char *pa, size_t size, const char *pf, const struct tm *p);
 Attention : This is important because of there are array and format!
 Formats(cppreference) : https://en.cppreference.com/w/c/chrono/strftime

 */

#include <stdio.h>
#include <time.h>


#define     SIZE    100


int main()
{
    char str[SIZE];

    time_t timer;
    time(&timer);
    struct tm* p = localtime(&timer);

    size_t n = strftime(str, SIZE, "Date: %A %B %Y\n", p);
    printf("%s", str);
    printf("Size = %zu\n", n);

    return 0;
}
