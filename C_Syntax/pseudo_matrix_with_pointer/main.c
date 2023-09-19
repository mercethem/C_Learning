#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    size_t row;
    size_t col;

    printf("How much do you want to col:\n");
    scanf("%zu", &col);
    printf("How much do you want to row:\n");
    scanf("%zu", &row);

    int* pd = (int*)malloc(row * col * sizeof(int));
    if (!pd) {
        fprintf(stderr, "Out of memory!\n");
        return 1;
    }

    int** pp = (int**)malloc(row * sizeof(int*));
    if (!pp) {
        fprintf(stderr, "Out of memory!\n");
        return 1;
    }

    for (size_t i = 0; i < row; ++i) {
        pp[i] = pd + col * i;
    }

    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            pp[i][j] = rand() % 10;
        }
    }

    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            printf("%d ", pp[i][j]);
        }
        printf("\n");
    }
    printf("---------------------------------------------\n");

    memset(pd, 0, row * col * sizeof(int));
    memset(pp, 0, row * sizeof(int*));
    free(pd);
    free(pp);

    return 0;
}
