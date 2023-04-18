#include <stdio.h>
#include "mylibrary.h"

int main() {

    int low, high;
    int prime_count = 0;

    printf("Please enter two integer :");
    scanf("%d%d", &low, &high);
    for (int i = low; i < high ; ++i) {
        if(isprime(i)){
            if(prime_count != 0 && prime_count % 20 == 0)
                pline();
            printf("%d ", i);
            ++prime_count;
        }
    }
    pline();
    return 0;
}
