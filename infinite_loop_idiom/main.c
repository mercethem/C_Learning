// Infinite loop idiom uses embedded system generally.
#include <stdio.h>
#include <conio.h>
/**
 while (1) {                                            while (1) {
    if (!expr)                                              statement1;
        break;                                              statement2;
    statement1;    ---> while infinite loop idiom           statement3;   ---> do-while infinite loop idiom
    statement2;                                             if (!expr)
    statement3;                                                 break;
 }                                                      }


 */

int main()
{
    int ch;

    printf("Please enter yes(y) or no(n) :");

    while ((ch = _getch()) != 'y' && ch != 'n')
        ; //null statement

     if(ch == 'y')
         printf("\nYou said YES\n");
     if(ch == 'n')
         printf("\nYou said NO\n");

    return 0;
}
