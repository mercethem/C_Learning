#include <stdio.h>

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
 const char str[] = "table";    ===> that is array initialized and this is only readable(not static)
 char* p = "table";             ===> that is pointer and initialized and thera are two variable in here
                                first is "table" and second is pointer p (static)
                                NOTE= Syntax Error in C++ need (const char* p = "table";)
                                NOTE2 = Use like this in C (const char* p = "table";)


 */

int main()
{
    char* p = "table"; //USE const char* p like C++
    *p = 'm'; //UNDEFINED BEHAVIOR(UB)
    p[2] = 'n';//UNDEFINED BEHAVIOR(UB)

    return 0;
}
