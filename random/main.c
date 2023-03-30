#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int c;

    for (;;) {  //Be careful infinite for!!!!
        c = rand() % 128; //0 - 127
        if(isalnum(c))
            putchar(c);
        Sleep(50);
    }
}
