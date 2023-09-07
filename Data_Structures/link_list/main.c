/**
 Linked lists are do sequential access
 */


#include <stdlib.h>
#include <stdio.h>


struct n
{
    int data;
    struct n* next;
};

typedef struct n node;


void listprint(node* root)
{
    while (root != NULL) {
        printf("%d ", root -> data);
        root = root -> next;
    }
}


int main()
{
    node* root;

    root = (node*)malloc(sizeof(node));
    root -> data = 10;

    root -> next = (node*)malloc(sizeof(node));
    root -> next -> data = 20;

    root -> next -> next = (node*)malloc(sizeof(node));
    root -> next -> next -> data = 30;

    node* iter;
    iter = root;

    printf("%d\n", iter -> data);

    iter = iter -> next;
    printf("%d\n", iter -> data);

    iter = iter -> next;
    printf("%d\n", iter -> data);


    root -> next -> next -> next = NULL;
    iter = root;
    int i = 0;

    while (iter -> next) { //use to print all linked list
        i++;
        printf("Index %d is %d\n", i, iter -> data);
        iter = iter -> next;
    }

    for (int i = 0; i < 5; ++i) {
        iter -> next = (node*)malloc(sizeof(node));
        iter = iter -> next;
        iter -> data = i * 10;
        iter -> next = NULL;
    }

    listprint(root);


    return 0;
}
