#include <stdio.h>


struct Data //structure tag
{
//structure members
    int a;
    int b;
    double dval;
    double dval2;
    //ATTENTION: These are contiguous in memory that style!
};

static struct Data g;

struct Data func(struct Data*);

int main()
{
    struct Data x; //type of this variable is struct Data
    struct Data a[10]; //type of this array is struct Data
    struct Data* ptr = &x; //type of this pointer is struct Data

    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(struct Data));
    printf("%zu\n", sizeof(x));

    return 0;
}
