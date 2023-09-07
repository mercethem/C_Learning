#include <stdio.h>
#define ME

#ifdef ME
    #error STOP // error is like a abort!

#endif

int main() { //This main not work because #error is opened. Preprocessor error!
    printf("Hello, World!\n");
    return 0;
}
