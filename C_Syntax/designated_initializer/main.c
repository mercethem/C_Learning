#include <stdio.h>
#include <conio.h>

int main()
{

    //int a[][] = {1,2,3,4,5,6,7,8,9}; //Syntax error
    //int b[3][] = {1,2,3,4,5,6,7,8,9}; //Syntax error

    int c[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // equal to  int c[4][3] = {1,2,3,4,5,6,7,8,9};

    int a[5][4] = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4},
            {5, 5, 5, 5}
    };

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    int* ptr = &a[0][0];
    int n = 5 * 4;

    while (n--){
        printf("%d ", *ptr++);
        _getch();
    }
    return 0;
}
