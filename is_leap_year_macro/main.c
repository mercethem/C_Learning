// Be careful to in macros' variable because can be UNDEFINED BEHAVIOR like ---> MACRO(x++) <---- That is UB
// Be careful to in macros' variable because can be LOGIC ERROR like ---> MACRO(func(x)) <---- That is LOGIC ERROR
#define         ISLEAP(y)           ((y) % 4 == 0 && ((y) % 100 != 0 || (y) % 400 == 0))

#include <stdio.h>

int main() {

    int year;

    printf("Please enter a year :\n");
    scanf("%d",&year);

    if (ISLEAP(year))
        printf("%d is leap year\n",year);
    else
        printf("%d is not leap year\n",year);

    return 0;
}
