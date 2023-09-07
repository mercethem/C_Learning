//C language use array for string literal
/**
 btBS (Null terminated byte stream) uses in C.
 null ---> '\0'
 exp ---> GEORGE\0 str[0]str[1]str[2]str[3]str[4]str[5]str[6] ---> str[6] = '\0'
 ATTENTION: If haven't got last char not equal '\0' or 0 so Undefined behavior!!!!
 for (int i = 0; str[i] != '\0'; ++i) ---> CLEAR!!!
 for (int i = 0; str[i] != 0; ++i)
 for (int i = 0; str[i]; ++i)
str[100] = {'H','O','N','E','Y'}; NOT UB
str[6] = {'H','O','N','E','Y'};  NOT UB
str[] = {'H','O','N','E','Y'};  UB!!!!!!!!!!!
str[5] = {'H','O','N','E','Y'};  UB!!!!!!!!!!!
char str[] = "HONEY";  NOT UB ---> sizeof(str) = 7!!!!

str[100] is not equal length of string
ATTENTION: If string array (str[i]) is static, all characters first values are '0'. Then so '\0' used in this string.

chat str[100];
scanf("%s", str) same thing to scanf("%s", str[100]) but not equal to scanf("%s", &str)
str ---> first component's address of array
ATTENTION = scanf can not use sentences because that function generally use only for word

puts() is not a variadic function!


 */



#include <stdio.h>
#include "mylibrary.h"

#define     SIZE     100

int main()
{
    char str[SIZE];
    char name[100] = "george";
    char surname[100] = "mc";

    for (int i = 0; name[i] != '\0'; ++i)
    {
        putchar(name[i]);

    }
    printf("\n");
    for (int i = 0; name[i] != '\0'; ++i)
    {
        putchar(surname[i]);

    }
    printf("\n");
    puts(name); //String then newline
    puts(surname);

    printf("Please enter a string :");
    sgets(str);
    printf("String : [%s]\n",str);

    return 0;
}
