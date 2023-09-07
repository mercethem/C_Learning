//Macro works because preprocessor works first not compiler and look up rules!

//!!!!!Macros are faster than functions but functions use more storage than macros.!!!!!
//Macros are type independent

#include <stdio.h>

int square(int x)
{
    return x * x;
}

#define         SQUARE(a)           ((a) * (a))

int main() {

    int ival;

    printf("Please enter a integer :\n");
    scanf("%d",&ival);

    int y = square(ival);
    //int y = (square)(ival);   Function uses first!!! Not MACRO because (square) used!

    printf("%d",y);

    return 0;

/**

#define         SQUARE(a)           ((a) * (a))

#include <stdio.h>

int (square)(int x)         // ---> Use like that ---> (square) <--- if macro upper then function

{
    return x * x;
}

int main() {

    int ival;

    printf("Please enter a integer :\n");
    scanf("%d",&ival);

    int y = square(ival);
    //int y = (square)(ival);   Function uses first!!! Not MACRO because (square) used!

    printf("%d",y);

    return 0;

}

 */
}
