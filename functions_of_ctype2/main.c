#include <stdio.h>
#include <ctype.h>

/**
 int isupper(int c); //uppercase ?
 int islower(int c); //lowercase ?
 int isalpha(int c); //alphabet char?
 int isdigit(int c); //number char?
 int isalnum(int c); //alphanumeric char?
 int isxdigit(int c); //hexadecimal alphanumeric char?
 int isspace(int c); //whitespace char? ' ', '\n', '\t', '\v', '\f', '\r'
 int ispunct(int c); //visible or not alphanumeric (% . ; ' ! etc. )
 int isprint(int c); // have got ' '
 int isgraph(int c); //  have not got ' '
 int isblank(int c); // ' ' or '\t' ?
 int iscntrl(int c); // (invisible char ? ASCII 1, 2 ,3, ..., 32 and 127)
 int tolower(int c); //uppercase to lowercase
 int toupper(int c); //lowercase to uppercase
 */
int main()
{

    printf("isupper\n");
    for (int i = 0; i < 128; ++i) {
        if (isupper(i))
            putchar(i);
    }

    printf("\n\n");
    printf("islower\n");
    for (int i = 0; i < 128; ++i) {
        if (islower(i))
            putchar(i);
    }

    printf("\n\n");
    printf("isalpha\n");
    for (int i = 0; i < 128; ++i) {
        if (isalpha(i))
            putchar(i);
    }

    printf("\n\n");
    printf("isdigit\n");
    for (int i = 0; i < 128; ++i) {
        if (isdigit(i))
            putchar(i);
    }

    printf("\n\n");
    printf("isalnum\n");
    for (int i = 0; i < 128; ++i) {
        if (isalnum(i))
            putchar(i);
    }

    printf("\n\n");
    printf("isxdigit\n");
    for (int i = 0; i < 128; ++i) {
        if (isxdigit(i))
            putchar(i);
    }

    printf("\n\n");
    printf("isspace\n");
    for (int i = 0; i < 128; ++i) {
        if (isspace(i))
            printf("%d ", i);
    }

    printf("\n\n");
    printf("ispunct\n");
    for (int i = 0; i < 128; ++i) {
        if (ispunct(i))
            putchar(i);
    }

    printf("\n\n");
    printf("isprint\n");
    for (int i = 0; i < 128; ++i) {
        if (isprint(i))
            putchar(i);
    }

    printf("\n\n");
    printf("isgraph\n"); //Without ' '
    for (int i = 0; i < 128; ++i) {
        if (isgraph(i))
            putchar(i);
    }

    printf("\n\n");
    printf("isblank\n");
    for (int i = 0; i < 128; ++i) {
        if (isblank(i))
            printf("%d ", i);
    }

    printf("\n\n");
    printf("iscntrl\n");
    for (int i = 0; i < 128; ++i) {
        if (iscntrl(i))
            printf("%d ", i);
    }

    return 0;

}
