#include <stdio.h>

//int call_cnt = 0;
// if you use like this as global variable that is not safe because other functions can change this
// and anybody or anything can call this variable as result that is not safe!


void func()
{
    static int call_cnt = 0; //This is safe because just this function can call and change!
    printf("%d. call!\n", ++call_cnt);
}

int main()
{
    for (int i = 0; i < 5; ++i) {
        func();
    }

    return 0;
}
