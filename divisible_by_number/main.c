#include <stdio.h>

int main() {
    int c;
    int sum = 0;

    printf("Please enter a integer : \n");
    while((c = getchar()) != '\n'){
        sum += c - '0';
    }
    if(sum % 3 == 0)
        printf("Yes,  divide by three.");
    else
        printf("No, %d don't divide by three.");
    return 0;
}
