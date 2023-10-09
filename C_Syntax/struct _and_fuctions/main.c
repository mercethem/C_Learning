#include <stdio.h>


struct Data
{
    int x, y;
    double dval;
};

void f1(struct Data p); //call by value
void f2(const struct Data* ptr);//call by reference - input parameter - getter!!!!
void f3(struct Data* ptr); //call by reference - output parameter - setter!!!!

void f4(struct Data* ptr);  //call by reference - input-output parameter - setter-getter!!!! but
                            //these types some functions getter some functions setter!!!

void f1(struct Data p) //call by value
{

}

void f2(const struct Data* ptr) //call by reference - input parameter - getter!!!!
{

}

void f3(struct Data* ptr) //call by reference - output parameter - setter!!!!
{

}

int main()
{
    struct Data y = {1, 3, 2.3};
    f1(y); //generally people don't use that because too much cost!

    /**
     If you want to use that struct in function than you have to use call by reference!!! Because of cost!
     */


    return 0;
}
