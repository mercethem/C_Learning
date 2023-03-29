#include <stdio.h>

/**
 getchar(), putchar() need stdio.h

 getchar() ---> Gets a character and extracts standard input stream and returns character's code. Scanf and getchar uses
 same buffer so getchar is line buffer function.

 */

int main() {
    int c;
    printf("Please enter a character :\n");
    c = getchar();
    printf("c = %d\n",c);




    /**

     */
    return 0;
}
