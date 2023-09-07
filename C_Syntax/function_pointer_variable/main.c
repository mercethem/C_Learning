

#include <stdio.h>
#include <ctype.h>


void print_char(const char* fname, int(*fp)(int))
{
    puts(fname);
    for (int i = 0; i < 128; ++i) {
        if(fp(i)){
            printf("%c", i);
        }
    }
    printf("\n\n");
}


int main()
{
    print_char("isupper", &isupper);
    print_char("isupper", &islower);
    print_char("isupper", &isdigit);
    print_char("isupper", &ispunct);



    return 0;
}
