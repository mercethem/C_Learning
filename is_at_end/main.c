#include <stdio.h>
#include <string.h>
#include "mylibrary.h"


#define     SIZE    100


int is_at_end(const char* p1, const char* p2)
{
    size_t len_p1 = strlen(p1);
    size_t len_p2 = strlen(p2);

    if(len_p2 > len_p1)
        return 0;

    return !strcmp(p1 + len_p1 - len_p2, p2);

}

int main()
{
    char s1[SIZE];
    char s2[SIZE];

    printf("Please enter first word:\n");
    sgets(s1);
    printf("Please enter second word:\n");
    sgets(s2);

    if(is_at_end(s1, s2)){
        printf("There is (%s) end of (%s)", s2, s1);
    }
    else{
        printf("There is NOT (%s) end of (%s)", s2, s1);

    }



    return 0;
}
