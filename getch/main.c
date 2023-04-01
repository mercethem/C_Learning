#include <stdio.h>
#include <conio.h>

//_getch() and _getche() don't use same buffer with scanf()

int main()
{
    int ch;
    printf("Please enter a character : \n");
    ch = _getch(); //Not standard and not echo, not line-buffered.
    printf("\nch = %d\n", ch);
    ch = _getche(); //Not standard and with echo, not line-buffered.
    printf("\nch = %d\n", ch);

    return 0;
}