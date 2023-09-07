#include <stdio.h>
/**
    main ---> f1 ---> f2 ---> f3 ---> f4 ---> f5 ---> f6 ---> f7
    long jump is from f7 to f1 (setjmp is macro or longjmp is function)
    near jump or local jump (goto is local jump. ---> between state-frame)

 */
int main() {
    int ival = 10;
    if(ival > 5)
        goto out;
    printf("Hello, World!\n");
    out:
    printf("Jumped from [goto out;] to [out:]"); //Labels use function scope and out is label!!!
    return 0;
}
