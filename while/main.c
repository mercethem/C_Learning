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

int sum_digit(int ival)
{
    int sum_digit = 0;
    while (ival !=0) {
        sum_digit += ival % 10;
        ival /= 10;
    }

    return sum_digit;
}

int rdigit (int ival)
{
    int retval = 0;

    while (ival){
        retval = retval * 10 + ival % 10;
        ival /= 10;
    }
    return retval;
}

int main() {
    int ival;
    printf("Please enter a integer :");
    scanf("%d", &ival);

    printf("Your integer is %d and your integer digit is %d\n", ival, ndigit(ival));
    printf("%d is your integer and sum digits is %d\n", ival, sum_digit(ival));
    printf("%d is your integer and your digit's reverse is %d\n", ival, rdigit(ival));
    return 0;
}
