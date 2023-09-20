#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "mylibrary.h"


int main()
{
    int ch;
    int ival;
    int* pd = NULL;
    int cnt = 0;

    randomize();

    for (;;) {
        printf("Do you want to get a integer (y) (n) :");
        while ((ch = _getch()) != 'y' && ch != 'n'); //null statement
        printf("%c\n", ch);
        if (ch == 'n')
            break;
        printf("Please enter integer:\n");
        ival = rand() % 1000;
        printf("%d\n", ival);

        pd = (int*)realloc(pd, (cnt + 1) * sizeof(int)); //Reallocation takes time!!!
        if (!pd) {
            fprintf(stderr, "Out of memory!\n");
            exit(EXIT_FAILURE);
        }
        pd[cnt++] = ival;
        print_array(pd,cnt);
        _getch();
        system("cls");
    }

//    if (!pd) {
//        printf("There is no integer\n");
//    }
//    else {
//        printf("You entered total : %d integer.\n", cnt);
//        print_array(pd, cnt);
//        free(pd);
//    }
    return 0;
}
