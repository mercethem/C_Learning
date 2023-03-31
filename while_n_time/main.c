#include <stdio.h>

int main() {
    int c ;

    printf("Please enter something :");
    while ((c = getchar() != '\n') ){
        printf("%d %c\n", c, c);
    }
    return 0;
}
