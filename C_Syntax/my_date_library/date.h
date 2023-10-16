//OOP Library


#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED


typedef struct
{
    int mday;
    int mmon;
    int myear;
} Date;

//set functions
Date* set_date(Date* p, int d, int m, int y);
Date* set_date_today(Date* p);
Date* set_date_str(Date* p, const char* pstr);
Date* set_date_random(Date *p);
Date* set_month(Date* p, int mon);
Date* set_month_day(Date* p, int mday);
Date* set_year(Date* p, int year);

//get functions
int get_year(const Date* p);
int get_month(const Date* p);
int get_month_day(const Date* p);
int get_week_day(const Date* p); //0 sunday - 6 saturday
int get_year_day(const Date* p);


//input-output functions
void print_date(const Date* p);
void scan_date(Date* p);

//utility functions
int cmp_date(const Date*, const Date*);
int date_diff(const Date *p, const Date*);
Date* ndays_date(Date* pdest, const Date* psource, int n);







#endif //DATE_H_INCLUDED
