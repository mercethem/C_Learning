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

    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            pd[i * col + j] = rand() % 10;
        }
    }


    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            printf("%d ", pd[i * col + j]);
        }
        printf("\n");
    }
    printf("------------------------------------------------\n");


    int* ptr = pd;
    size_t n = row * col;
    while (n--){
        printf("%d ", *ptr++);
    }


    memset(pd, 0, row * col * sizeof(int));
    free(pd);

    return 0;
}
