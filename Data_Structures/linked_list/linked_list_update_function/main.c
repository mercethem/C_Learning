#include <stdlib.h>
#include <stdio.h>


struct n
{
    int data;
    struct n* next;
};

typedef struct n node;

void print_list(node* iter)
{
    while (iter) {
        printf("%d ", iter -> data);
        iter = iter -> next;
    }
}

void add_list(node* iter, int data)
{
    while (iter -> next) {
        iter = iter -> next;
    }
    iter -> next = (node*)malloc(sizeof(int));
    iter -> next -> data = data;
    iter -> next -> next = NULL;
}


int main()
{
    node* root;
    root = (node*)malloc(sizeof(int));
    root -> next = NULL;
    root -> data = 500;

    for (int i = 0; i < 5; ++i) {
        add_list(root, i * 10);
    }

    print_list(root);

    return 0;
}
