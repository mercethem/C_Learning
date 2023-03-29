//Hexadecimal integer to decimal integer
#include <stdio.h>

int main() {
    int x;
    int c;
    printf("Please enter a hexadecimal integer : ");

    x = 0;
    while ((c = getchar()) != '\n'){
        if  (c >= '0' && c <= '9')
            x = x * 16 + c - '0';
        else if (c >= 'A' && c < 'F')
            x = x * 16 + c - 'A' + 10;
        else if (c >= 'a' && c <= 'f')
            x = x * 16 + c - 'a' + 10;
    }

    printf("x = %d\n", x);
    return 0;
}
