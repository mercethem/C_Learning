/**

 typedef int Word;
 int a[10]; ===> typedef int INTA10[10];

 int(*fp)(int); ===> typedef int(*FPTR)(int);

 struct Data x; ===> typedef struct Data Person;
 */


#include <stdio.h>
#include <stdlib.h>


#define     NAME_SURNAME_SIZE   40


typedef struct Data
{
    int ID;
    char name[NAME_SURNAME_SIZE];
    char surname[NAME_SURNAME_SIZE];
} Data;

typedef struct _Data2 //another convention
{
    int ID;
    char name[NAME_SURNAME_SIZE];
    char surname[NAME_SURNAME_SIZE];
} Data2;

typedef struct //===> if you use like that you can not use struct keywords in scopes
{
    int ID;
    char name[NAME_SURNAME_SIZE];
    char surname[NAME_SURNAME_SIZE];
} Data3;

typedef struct Data4
{
    int a;
    int b;
} * DataPtr;

typedef struct //Dynamic storage duration not static or automatic just dynamic!
{
    int a;
    int b;
} * DataPtr2;

typedef const struct Data* CDataPtr;

int main()
{
    struct Data x;
    DataPtr p = &x;

    struct Person;

    DataPtr2 pd = (DataPtr2)malloc(sizeof(*pd)); //Not UB because of unavailable context!!!
    // does not produce an opcode for the variable in sizeof()!!!

    return 0;
}
