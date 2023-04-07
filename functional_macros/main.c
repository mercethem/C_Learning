
//This functional macros practical and reduces to cost. Generally uses one-liner functions

//!!!!!Macros are faster than functions but functions use more storage than macros.!!!!!
//! How is it ?
//! Answer: Compilers do optimisation inside code like riding paragraphs.
//! If you use functions in this paragraph code have divide and optimisation is so hard but if you use macro
//!  compiler do best optimisation because paragraph had not divide

/** Macros are type independent and macros have got not address but functions have got address. You can not use macros in
callback function
 Be careful macros because they are risky because of debugging*/


#include <stdio.h>
#include "nutility.h"

int main() {

    int x, y;

    printf("Please enter two integer :");
    scanf("%d%d", &x, &y);

    int max = max2(x, y);

    printf("%d", max);

    return 0;
}
