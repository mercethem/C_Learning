#include <stdio.h>
#include "date.h"
#include "mylibrary.h"


#define     SIZE    100


int main()
{
    Date x;

    set_date(&x, 2, 4, 2005);
    print_date(&x);
    set_date_today(&x);
    print_date(&x);
    set_date_str(&x, "03-05-2005");
    print_date(&x);
    set_month_day(&x, 10);
    print_date(&x);

    randomize();
    Date mydate;

    for (int i = 0; i < SIZE; ++i) {
        set_date_random(&mydate);
        print_date(&mydate);
    }

    printf("Please enter your birthday (dd mm yyy)\n");
    scan_date(&mydate);
    print_date(&mydate);


    set_date_today(&mydate);
    print_date(&mydate);
    printf("%d. day of year\n", get_year_day(&mydate));

    Date bdate;
    Date todays_date;

    printf("Plase enter your birthday(dd mm yyyy) : \n");
    scan_date(&bdate);
    printf("Your birthday : ");
    print_date(&bdate);
    set_date_today(&todays_date);
    printf("Date of today : ");
    print_date(&todays_date);
    int ndays = date_diff(&todays_date, &bdate);

    printf("Today is %d. day is your life", ndays);

    Date bdate2;
    Date future_date;

    set_date_today(&bdate2);
    printf("Please enter today date : ");
    print_date(&bdate2);


    for (int i = 1; i <= 1000000000; i *= 10) {
        printf("%d days later ", i);
        ndays_date(&future_date, &bdate2, i);
        print_date(&future_date);
    }

    return 0;
}
