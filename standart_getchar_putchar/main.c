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

    for (int i = 0; i < 26; ++i) {
        putchar(i + 'A');
    }
    for (int i = 0; i < 26; ++i) {
        putchar(i + 'a');
    }
    for (int i = 0; i < 10; ++i) {
        putchar(i + '0');
    }



    /**

     */
    return 0;
}
