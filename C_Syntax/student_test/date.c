#include "date.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define     PRIVATE             static //for internal linkage
#define     PUBLIC
#define     YEARBASE            1900
#define     RANDOM_YEAR_MIN     2000
#define     RANDOM_YEAR_MAX     2050


#define     isleap(y)           ((y) % 4 == 0 && ((y) % 100 != 0 || (y) % 400 == 0))
#define     month_days(y, m)     (daytabs[isleap(y)][m])

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PRIVATE const int daytabs[][13] = { //leap year or not lookup table
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,}
};

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PRIVATE int is_valid_date(int d, int m, int y);

PRIVATE Date* set(Date* p, int d, int m, int y);

PRIVATE int day_of_week(int d, int m, int y);

PRIVATE int totaldays(const Date* p);

PRIVATE Date* to_date(Date* p, int total_days);

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------


/** public functions */

PUBLIC Date* set_date(Date* p, int d, int m, int y)
{
    return set(p, d, m, y);
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC Date* set_date_today(Date* p)
{
    time_t timer;
    time(&timer);
    struct tm* tptr = localtime(&timer);

    return set(p, tptr->tm_mday, tptr->tm_mon + 1, tptr->tm_year + 1900);
}


//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

//dd-mm-yyyy
PUBLIC Date* set_date_str(Date* p, const char* pstr)
{
    int d = atoi(pstr);
    int m = atoi(pstr + 3);
    int y = atoi(pstr + 6);

    return set(p, d, m, y);

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC Date* set_date_random(Date* p)
{
    int y = rand() % (RANDOM_YEAR_MAX - RANDOM_YEAR_MIN + 1) + RANDOM_YEAR_MIN;
    int m = rand() % 12 + 1;
    int d = rand() % month_days(y, m) + 1;

    return set(p, d, m, y);
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC Date* set_month_day(Date* p, int mday)
{
    return set(p, mday, p->mmon, p->myear);
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC Date* set_month(Date* p, int mon)
{
    return set(p, p->mday, mon, p->myear);
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC Date* set_year(Date* p, int year)
{
    return set(p, p->mday, p->mmon, year);
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------


PUBLIC Date* scan_date(Date* p)
{
    int d;
    int m;
    int y;
    int retval = scanf("%d%d%d", &d, &m, &y);

    if (retval != 3) {
        fprintf(stderr, "Input Error!");
        exit(EXIT_FAILURE);
    }

    return set(p, d, m, y);
}


PUBLIC void print_date(const Date* p)
{
    static const char* const pmons[] = {
            "",
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December",
    };

    static const char* const pdays[] = {
            "Sunday",
            "Monday",
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday",
    };

    printf("%02d %s %d %s\n", p->mday, pmons[p->mmon], p->myear, pdays[get_week_day(p)]);
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC int cmp_date(const Date* p1, const Date* p2)
{
    if (p1->myear != p2->myear)
        return p1->myear - p2->myear;

    if (p1->mmon != p2->mmon)
        return p1->mmon - p2->mmon;

    return p1->mday - p2->mday;

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC int get_year(const Date* p)
{
    return p->myear;
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC int get_month(const Date* p)
{
    return p->mmon;
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC int get_month_day(const Date* p)
{
    return p->mday;
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC int get_week_day(const Date* p)//0 sunday - 6 saturday
{
    return day_of_week(p->mday, p->mmon, p->myear);
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC int get_year_day(const Date* p)
{
    int sum_day = p->mday;

    for (int i = 1; i < p->mmon; ++i) {
        sum_day += month_days(p->myear, i);
    }
    return sum_day;
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC int date_diff(const Date* p1, const Date* p2)
{
    return abs(totaldays(p1) - totaldays(p2));
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PUBLIC Date* ndays_date(Date* pdest, const Date* psource, int n)
{
    return to_date(pdest, totaldays(psource) + n);
}


//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------


/** private functions */

PRIVATE int is_valid_date(int d, int m, int y)
{
    return y >= YEARBASE && m > 0 && m <= 12 && d > 0 && d <= month_days(y, m);
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PRIVATE Date* set(Date* p, int d, int m, int y)
{
    if (!is_valid_date(d, m, y)) {
        fprintf(stderr, "Valid date created!\n");
        exit(EXIT_FAILURE);
    }
    p->mday = d;
    p->mmon = m;
    p->myear = y;

    return p;
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PRIVATE int day_of_week(int d, int m, int y)
{
    return (d += m < 3 ? y-- : y - 2, 23 * m / 9 + d + 4 + y / 4 - y / 100 + y / 400) % 7;
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PRIVATE int totaldays(const Date* p)
{
    int sum = get_year_day(p);

    for (int i = YEARBASE; i < p->myear; ++i) {
        sum += isleap(i) ? 366 : 365;
    }

    return sum;
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

PRIVATE Date* to_date(Date* p, int total_days)
{
    int y = YEARBASE;

    while (total_days > (isleap(y) ? 366 : 365)) {
        total_days -= isleap(y) ? 366 : 365;
        ++y;
    }

    int m = 1;

    while (total_days > month_days(y, m)) {
        total_days -= month_days(y, m);
        ++m;
    }

    int d = total_days;

    return set(p, d, m, y);
}