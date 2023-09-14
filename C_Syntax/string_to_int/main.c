#include <stdio.h>
#include <stdlib.h>


#define     SIZE    100


int main()
{
    char str[SIZE]; //3452

    printf("Please enter a integer:\n");
    scanf("%s", str); //3452

    int ival = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        ival = ival * 10 + str[i] - '0';
//        printf("%c %d %d\n", str[i], str[i], str[i] - '0');
    }
    printf("ival = %d\n", ival);


    /**
     alphabetic to integer

     atoi(const char* p); //decimal!!!

     */

    printf("Plase enter a integer:\n");
    int ival2 = atoi(str);
    scanf("%s", str); //3452
    printf("(%s)\n", str);
    printf("ival = %d\n", ival2);

    return 0;
}
