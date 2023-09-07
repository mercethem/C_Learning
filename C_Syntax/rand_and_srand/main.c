#include <stdio.h>
#include <stdlib.h>

int main()
{
   srand(1243u);
    for (int i = 0; i < 100; ++i) {
        printf("%d ", rand());
    }
}
/**
for(;;){
 putchar(rand() % 26 + 'A'); If you use rand() or srand() DO NOT USE '%' for random functions
 _getch();
 }
*/