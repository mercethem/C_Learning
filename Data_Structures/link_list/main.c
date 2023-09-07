#include <stdlib.h>

struct n
{
    int x;
    struct n* next;
};

typedef struct n node;

int main()
{
    node* root;
    root = (node*)malloc(sizeof(node));
    root -> x = 10;
    root -> next ->x = 10;
    for (int i = 1; i <=3 ; ++i) {
        
    }
}
