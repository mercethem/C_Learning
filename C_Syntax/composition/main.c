#include <stdio.h>


struct Data
{
    int x, y;
    double dval;
};

struct Data2
{
    int a;
    struct Data mydata;
};

int main()
{

    struct Data2 my;
    struct Data2* ptr = &my;

    my.mydata.dval; //That is composition!
    ptr -> mydata.dval; //That is composition!

    return 0;
}
