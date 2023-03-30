#include <stdio.h>
#include <ctype.h> //Func type int, names start is... int isxxxx(int c); Zero = FALSE, Non-zero = TRUE.
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
int main() {
    int c;

    printf("Please enter a character :");
    c = getchar();

    printf("%d code is that your character\n",c);
    if (isupper(c))
        printf("uppercase\n");
    else
        printf("not uppercase\n");

    if (islower(c))
        printf("lowercase\n");
    else
        printf("not lowercase\n");

    if (isalpha(c))
        printf("alphabetic character\n");
    else
        printf("not alphabetic character\n");

    if (isdigit(c))
        printf("digit character\n");
    else
        printf("not digit character\n");

    if (isalnum(c))
        printf("alphanumeric character\n");
    else
        printf("not alphanumeric character\n");

    if (isxdigit(c))
        printf("hexadecimal digit character\n");
    else
        printf("not hexadecimal digit character\n");

    if (isspace(c))
        printf("space character\n");
    else
        printf("not space character\n");

    if (ispunct(c))
        printf("punctuation character\n");
    else
        printf("not punctuation character\n");

    if (isprint(c))
        printf("print character\n");
    else
        printf("not print character\n");

    if (isgraph(c))
        printf("graph character\n");
    else
        printf("not graph character\n");

    if (isblank(c))
        printf("blank character\n");
    else
        printf("not blank character\n");

    if (iscntrl(c))
        printf("control character\n");
    else
        printf("not control character\n");
    printf("%c ---> %c\n",c , toupper(c));
    printf("%c ---> %c\n",c , tolower(c));
    return 0;
}
