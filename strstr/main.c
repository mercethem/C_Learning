//char* strstr(const char* psource, const char* psearched);
//Search a string in the string and return index!

#include <stdio.h>
#include <string.h>
#include "mylibrary.h"


#define     SIZE    100



int main()
{

    char str[SIZE];
    char searched[SIZE];

    printf("Please enter a string:\n");
    sgets(str);
    printf("Please enter the string want to search:\n");
    sgets(searched);

    char* p = strstr(str, searched);

    if(p) {
        printf("Found, index is %llu\n", p - str);
        puts(p);
    }
    else{
        printf("Did not Found!");
    }


    printf("Please enter a string:\n");
    sgets(str);
    printf("Please enter the string want to search:\n");
    sgets(searched);

    char* ptr = strstr(str, searched);

    if(p){
        size_t len = strlen(searched);
        while(len--)
            *ptr++ = '*';
        printf("%s\n",str);
    }
    else{
        printf("Not Found!");
    }

    return 0;
}
