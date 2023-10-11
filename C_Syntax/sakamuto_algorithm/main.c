#include <stdio.h>
#include "mylibrary.h"

static const char* const pdays[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THIRSDAY",
        "FRIDAY",
        "SATURDAY",
};


int main()
{
    int day;
    int month;
    int year;

    printf("Please enter your birthday (DD MM YYYY) :\n");
    scanf("%d%d%d", &day, &month, &year);
    printf("%s\n", pdays[day_of_week(day, month, year)]);

    return 0;
}
