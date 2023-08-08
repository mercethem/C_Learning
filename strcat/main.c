/**

 char* strcat(char* pdest, const char* psoruce); (String Concatenation)
 If steak over flow from array size then be undefined behavior

 */

#include <stdio.h>
#include <string.h>


#define     SIZE    100

char* mystrcat(char* pdest, const char* psource)
{
    char* ptemp = pdest;

    while (*pdest)
        ++pdest;

    while ((*pdest++ =*psource++))
        ; //null statement

        return ptemp;
}

char* mystrcat2(char* pdest, const char* psource)
{
    strcpy(pdest + strlen(pdest), psource);

    return pdest;
}

char* mystrcat3(char* pdest, const char* psource)
{
    strcpy(strchr(pdest, '\0'), psource);

    return pdest;
}


int main()
{
    char str1[SIZE];
    char str2[SIZE];

    printf("Please enter two name:\n");
    scanf("%s%s", str1, str2);

    mystrcat3(str1, str2);

    printf("(%s)", str1);

    return 0;
}
