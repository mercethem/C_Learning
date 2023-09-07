#include <stdio.h>

int z = 0;

int func(void)
{
    int x = 15;
    static int y = 20;
    printf("x: %d , y: %d , z : %d\n",x,y,z);
    ++x;
    ++y;
    ++z;
    return 0;
}

int main(void) {
    func();
    func();
    func();
    func();
    func();
}
