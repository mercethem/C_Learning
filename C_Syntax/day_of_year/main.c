#include <stdio.h>
#include "mylibrary.h"

int day_of_year(int d, int m, int y)
{

    int sum = d;

    switch (m - 1) {
        case 11 :
            sum += 30; //fallthrough
        case 10 :
            sum += 31; //fallthrough
        case 9  :
            sum += 30; //fallthrough
        case 8  :
            sum += 31; //fallthrough
        case 7  :
            sum += 31; //fallthrough
        case 6  :
            sum += 30; //fallthrough
        case 5  :
            sum += 31; //fallthrough
        case 4  :
            sum += 30; //fallthrough
        case 3  :
            sum += 31; //fallthrough
        case 2  :
            sum += isleap(y) ? 29 : 28; //fallthrough
        case 1  :
            sum += 31;
    }
    return sum;
}

int main()
{
    int day, month, year;
    printf("Please enter day mount and year (DD/MM/YYYY) :");
    scanf("%d%d%d", &day, &month, &year);
    printf("%dth day of %d\n", day_of_year(day, month, year), year);
    return 0;
}
