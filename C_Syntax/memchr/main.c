/**
 strchr search full string argument and finish when found null character
 memchr searches your character your range
 */

#include <stdio.h>
#include <string.h>


#define     SIZE    100


int main()
{
    char str[SIZE] = "6543218643518436549843513216354987432112451251222165";
    char* p = (char*)memchr(str + 20/*start*/, '2'/* what do you want to search*/, 20 /*range*/);
    if (p) {
        printf("Found! Index is =  %lld\n", p - str);
    }
    else {
        printf("NOT found\n");
    }
    return 0;
}
