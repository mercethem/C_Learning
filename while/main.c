#include <stdio.h>

/**

 while(expr){
    statement;
 }                          expr. = // TRUE ---> Non-zero (if expression is TRUE to do statement)
                                    // FALSE ---> zero    (when expression turr FALSE, than while finish)
 while(expr)
    statement , statement2;


 */

int ndigit(int val)
{
    int digit_count = 0;
    if(val == 0)
        return 1;
    while(val) {
        ++digit_count;
        val /= 10;
    }
    return digit_count;

}
int get_char(int ch) //Another function in while loop
{
    while((ch = getchar()) != '\n')
        printf("%c %d\n", ch, ch);
    return ch;
}

int main() {
    int ival;
    printf("Please enter a integer :");
    scanf("%d", &ival);

    printf("Your integer is %d and your integer digit is %d\n", ival, ndigit(ival));
    return 0;
}
