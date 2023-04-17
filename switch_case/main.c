#include <stdio.h>

int main()
{
    int day;

    printf("Please enter a day (1-7) :");
    scanf("%d", &day);

    switch (day) {  //Sometimes uses return value of a functions
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Midweek");break;
        case 6:
        case 7:
            printf("Weekend");break;
        default:
            printf("Wrong enter, please enter integer between 1 to 7!!!");
    }
    return 0;
}
