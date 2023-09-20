/**

 malloc(0) ===> NULL Pointer or Not NULL Pointer(Another address) bu can change for compiler!
 If you use these addresses then UB
 If you free these addresses then not be UB



 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    size_t n;

    printf("How much do you want to variable:\n");
    scanf("%zu", &n);

    int* pd = (int*)malloc(n * sizeof(int));
    if (!pd) {
        fprintf(stderr, "Out of memory!\n");
        return 1;
    }
    else{
        printf("Address of malloc: %p\n", pd);
    }










    return 0;
}
