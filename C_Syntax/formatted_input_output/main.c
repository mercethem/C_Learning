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
#include <string.h>

#define     SIZE    100


int main()
{
    int x = 20;
    double dval = 3.5;
    char str[] = "helen";
    char buffer[SIZE];

//    printf("%d %f %s\n", x, dval, str);
    sprintf(buffer, "%d %f %s", x, dval, str);

    puts(buffer);
    _strrev(buffer);
    puts(buffer);


    char name[SIZE] = "helen";
    char surname[SIZE] = "marks";
    int birth_year = 1996;

    //helen_mark_1996.txt
    printf("%s_%s_%d.txt\n", name, surname, birth_year);

    char file_name[SIZE];
    sprintf(file_name, "%s_%s_%d.txt", name, surname, birth_year);

    printf("(%s)\n", file_name);


    return 0;
}
