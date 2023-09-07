/**
 7, 11              ===> WIN
 2, 3, 12           ===> LOSE

 4, 5, 6, 8, 9, 10  ===> Try one more again but if you are take '7' you lost!


 Result is %49.2299 almost %49.23 but that is not true because of bad uniform and using mod
 With C++ mt 19937 True result is %49.28
 */



#include <stdio.h>
#include <stdlib.h>

#define         NGAMES         10000000

int roll_dice(void)
{

    int dice_x = rand() % 6 + 1; //Do not use % because of posibility
    int dice_y = rand() % 6 + 1; //Do not use % because of posibility

    return dice_x + dice_y;
}

int game_(int dice)
{
    int new_dice;

    for (;;) {
        new_dice = roll_dice();
        if (new_dice == 7)
            return 0;

        if (new_dice == dice)
            return 1;
    }
}

int game(void) //If game returns 1 =  players WIN, 0 = players LOSE
{
    int dice = roll_dice();

    switch (dice) {
        case 7:
        case 11:
            return 1;
        case 2:
        case 3:
        case 12:
            return 0;
        default:
            return game_(dice);
    }
}


int main()
{
    int win_count = 0;

    for (int i = 0; i < NGAMES; ++i) {
        win_count += game();
    }
    printf("Win possibility of player %f\n", (double) win_count / NGAMES);
    return 0;
}
