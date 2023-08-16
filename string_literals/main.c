
/**

 3["table"] equal to *(3 + "table") eequal to "table"[3]
 Use only readable to String literal!!! DO NOT USE WRITABLE!!!

 String literals have static storage duration.


 ATTENTION
 ---------
 const char* p1 = "table";
 const char* p2 = "table";

 if(p1 == p2)
    printf("true);      ===> UNSPECIFIED BEHAVIOR!!! DEPENDS ON COMPILER!!!
 else
    printf("false");



 ATTENTION
 ---------
 #define    SIZE   100

 int main(){
    char str[SIZE];

    if(str == "table"){  ===> ALWAYS FALSE!!! If you want compare strings you have to use strcmp!!!!
    }

 }


 char str[] = "table";          ===> that is array initialized and this is readable and writable(not static)
                                array size 5(table) + 1(\0).
 const char str[] = "table";    ===> that is array initialized and this is only readable(not static).
 char* p = "table";             ===> Array decay, that is pointer and initialized and there are two variable
                                in here first is "table" and second is pointer p (static).
                                NOTE= Syntax Error in C++ need (const char* p = "table";).
                                NOTE2 = Use like this in C (const char* p = "table";).


 const char* p = ""; // NULL STRING LITERAL (strlen("") ===> 0, sizeof("") ===> bvecause of there is
                                             a secret "\0" en of the null string literal)



 */
#include <stdio.h>
#include <string.h>


#define     SIZE    100

int main()
{
    char old_file_name[SIZE];
    char new_file_name[SIZE];

    printf("Please enter file name:");
    scanf("%s", old_file_name);

    strcpy(new_file_name, old_file_name);//Copy from old to new
    char* p = strrchr(new_file_name, '.'); //search '.'

    if (!p) {
        strcat(new_file_name, ".dat"); //".dat" added end of file name
    }
    else if (!strcmp(p, ".xls")) { //checked ".xls" end of file name
        strcpy(p, ".doc"); //".xls" changed end of file name ".doc"
    }
    else if (!strcmp(p, ".jpg")) { //checked ".jpg" end of file name
        *p = '\0';  //Changed ".jpg" to '\0'(NULL is end of name)
    }
    else {
        strcpy(p, ".txt"); //different versions changed end of file name ".txt"
    }
    printf("(%s) ===> (%s)", old_file_name, new_file_name);
}
