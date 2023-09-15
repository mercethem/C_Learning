/**
    std out
    1) printf : output to standard output
    2) sprintf : output to memory(array)
    3) fprintf : output to file

    std in

    1) scanf : input from standard
    2) sscanf : input from memort(array)
    3) fscanf : input from file
*/


#include <stdio.h>


#define     SIZE    100


int main()
{
    char str[SIZE] = "234 567 890";
    char str2[SIZE] = "321123helen321321";

    int x;
    int y;
    int z;
    char s[SIZE];

    sscanf(str, "%d%d%d", &x, &y, &z);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    sscanf(str2, "%d%s%d", &x, s, &y);
    printf("%d\n", x);
    printf("%s\n", s);
    printf("%d\n", y);

    return 0;
}
