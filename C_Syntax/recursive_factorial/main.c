#include <stdio.h>
#include <inttypes.h>


#define     SIZE    10


int64_t factorial(int64_t n)
{
    int64_t factorial = 1;

    for (; n > 0 ; factorial *= n--);
    return factorial;
}


int64_t recursive_factorial(int64_t n)
{
    if(n <= 1)
        return 1;
    return n * recursive_factorial(n - 1);

}

int main()
{

    int64_t x = recursive_factorial(SIZE);

    printf("%li",x);

    return 0;
}
