#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"


#define     SIZE    100


int main()
{
    size_t row;
    size_t col;

    printf("Please enter how much do you want to row and column:\n");
    scanf("%zu%zu", &row, &col);

    int** pd = (int**)malloc(row * sizeof(int*));

    if (!pd) {
        fprintf(stderr, "Out of memory!\n");
        return 1;
    }

    for (size_t i = 0; i < row; ++i) {
        pd[i] = (int*)malloc(col * sizeof(int));
        if (!pd[i]) {
            fprintf(stderr, "Out of memory!\n");
            return 1;
        }
    }

    randomize();

    for (size_t i = 0; i < row; ++i) {
        for (size_t k = 0; k < col; ++k) {
            pd[i][k] = rand() % 10;
        }
    }

    for (size_t i = 0; i < row; ++i) {
        for (size_t k = 0; k < col; ++k) {
            printf("%d ", pd[i][k]);
        }
        printf("\n");
    }
    printf("------------------------------------------\n");

    for (size_t i = 0; i < row; ++i) {
        free(pd[i]);
    }

    free(pd);


    exit(EXIT_SUCCESS);
}
