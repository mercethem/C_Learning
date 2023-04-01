//This project is about ellipsis "..."
#include <stdio.h>

int func(int x, int y, ...)
{
///exp

}

int main()
{
    //func(); wrong syntax min 2 value
    //func(5); wrong syntax min 2 value
    func(5,2);
    func(5,2,3);
    func(5,2,3,4);
    return 0;
}
