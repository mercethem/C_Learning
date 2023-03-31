#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int c;
    int ival;

    while(1){
        printf("Are you want to create a random number : YES(y) or NO(n) ?");
        while ((c = _getch()) != 'y' && c != 'n')
            ; //null statement
        printf("%c\n", c);

        if (c == 'n')
            break;
        ival = (rand() % (rand() % rand()) ? rand() : rand()) * rand();
        printf("%d\n", ival);

    }

    return 0;
}
