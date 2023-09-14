#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"

#define     SIZE    100
int main()
{
    char date[SIZE];

    printf("Please enter a date (dd-mm-yyyy):\n");
    sgets(date);
    int day;
    int month;
    int year;

    day = atoi(date);
    month = atoi(date + 3);
    year = atoi(date + 6);

    printf("%02d-%02d-%d",day, month, year);

    return 0;
}
