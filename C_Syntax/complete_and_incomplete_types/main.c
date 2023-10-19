/**

 Can be incomplete type about parameter type or return type of a function
 There is just about user defined types

 */

#include <stdio.h>

struct Mystruct2; //incomplete type declaration(C++ forward declaration)

struct Mystruct
{ //complete type
    int a, b, c;
    //struct Mystruct2 mystruct; //Not allowed!!!
};



//extern struct Mystruct2 a[];


struct Data* foo(void);

void f(struct Data*);

int main()
{
    struct Mystruct2; //incomplete type
    struct Mystruct type2; //complete type
    struct Mystruct2; //incomplete type declaration(C++ forward declaration)
    struct Mystruct2 func(struct Mystruct2); //incomplete type declaration(C++ forward declaration)
    struct Mystruct2* func2(struct Mystruct2*); //incomplete type declaration(C++ forward declaration)

    typedef struct Mystruct2 mystruct3;
    typedef struct Mystruct2* mystruct3ptr;

    extern struct Mystruct2 mystructglobal;


    struct Mystruct2* ptr = NULL;

//    struct mystruct2* p =foo();
//    f(p);

    //*p; p->x;ERROR! Incomplete types can not usable with these (If you want to use need complete type)
    //sizeof(COMPLETE TYPE!!!);

    return 0;
}

