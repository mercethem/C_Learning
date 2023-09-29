#include <stdio.h>

struct DataRoot{
    int a;
};

struct Data //structure tag
{
//structure members     ATTENTION: Compiler do not get any memory in ram for this struct!
                                    //That is just data not and data no need any memory
                                    //If you create a member of Data then compiler get a memory!!!
                                    //for example ===> struct Data x; compiler get memory now!
                                    //Because struct just a notification!!!!
    int x;
    double y;
    int* p;
    int a[20];
    char str[40];
    int (*pFunction)(int);
    int b[2][5];
    struct DataRoot myroot; //nested struct!

    //ATTENTION: These are contiguous in memory that style!
    //ATTENTION: You can not use a function in struct! (Can be in C++)
    //Member selection operators are ===>  . and  -> (left associative) (dot operator and arrow operator)
    // dot operator use for struct element himself but arrow operator for pointer of struct element
    // mydata.x; ptr -> x;

};

static struct Data g;

struct Data func(struct Data*);

int main()
{
    struct Data x; //type of this variable is struct Data
    struct Data a[10]; //type of this array is struct Data
    struct Data* ptr = &x; //type of this pointer is struct Data

    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(struct Data));
    printf("%zu\n", sizeof(x));

    return 0;
}
