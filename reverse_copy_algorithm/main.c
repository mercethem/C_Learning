#include <stdio.h>

#define     SIZE    100

int main()
{
    char source[SIZE] = "Hey george what's up!";
    char dest[SIZE];
    int i;
    int k = 0;

    for (i = 0; source[i] != '\0'; ++i)
        ;//null statement

    while (i != 0) {
        dest[k++] = source[--i];
    }

    dest[k] = '\0';

    printf("[%s]\n", source);
    printf("[%s]\n", dest);

    return 0;
}
