#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
    if(printf("Hello, World!\n")){}
    while(!printf("Hello, World!\n")){}
    switch(printf("Hello, World!\n")){}

    return 0;
}
