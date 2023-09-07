#include <stdio.h>


#define     SIZE    100


void myputs(const char* p)
{
    for (int i = 0; p[i] != '\0' ; ++i) {
        putchar(p[i]);
    }
    putchar('\n');
}

void myputs2(const char* p)
{
    while (*p != '\0'){
        putchar(*p);
        ++p;
    }
    putchar('\n');
}

void myputs3(const char* p)
{
    while (*p){
        putchar(*p++);
    }
    putchar('\n');
}

int main()
{
    char str[SIZE] = "HELLO PROGRAMS";

    puts(str);
    myputs(str);
    myputs2(str);
    myputs3(str);

    return 0;
}
