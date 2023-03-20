#include <stdio.h>

int func(void)
{
    int x = 15;
    static int y = 20;
    printf("x: %d , y: %d\n",x,y);
    x++;
    y++;
    return 0;
}

int main(void) {
    func();
    func();
    func();
    func();
    func();
}
