/**
 if you use keyword to const, you can not assign this variable's value or array's values!!!
 Logical stables!!!
 const keyword always static and stable so unchangeable if you changed with tricks this is UB!!!!
 */

#include <stdio.h>

int main()
{
    const int ival = 45;
    const int arr[] = {0, 1, 2, 3, 51, 762, 6234};

    // ++ival; "You can not use"
    //arr[4] = 56; "You can not use"

    return 0;
}
