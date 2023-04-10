/**

 #undef
 #if //if
 #else //else
 #elif  //else if
 #endif //finish if
 #ifdef //if define
 #ifndef //if not define

 */

#include <stdio.h>
#define ME 100  //You can not use real numbers (265.52) just integer!!!
#define KM 10

#if ME > 10
    #include <stdlib.h>
    int number1 = 0;
#if defined KM && defined CM  //defined is logic preprocessor operator
    int number2 = 1000;
#else
    int x = 10;
#endif

#ifndef TM
    int y = 10;
#endif

#elif ME < 10
    double dval = 10;
    #include <math.h>
#elif  ME > 100
    double dval = 40;
    #include <math.h>
#endif


int main()
{
    number1;
    printf("Hello, World!\n");
    return 0;
}
