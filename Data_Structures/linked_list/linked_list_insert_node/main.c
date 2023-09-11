#include <stdlib.h>
#include <stdio.h>


struct node
{
    size_t data;
    struct node* next;
};

typedef struct node node;

void print_list(node* r)
{
    while (r) {
        printf("%zu ", r -> data);
        r = r -> next;
    }
}

void add_list(node* r, size_t data)
{
    while (r -> next) {
        r = r -> next;
    }
    r -> next = (node*)malloc(sizeof(node));
    r -> next -> data = data;
    r -> next -> next = NULL;
}

void insert_node(node* r, size_t val)
{
    while (r -> next) {
        r = r -> next;
    }
    r -> next = (node*)malloc(sizeof(node));
    r -> next -> data = val;
    r -> next -> next = NULL;
}

node* insert_contigous(node* r, size_t val)
{
    if (r == NULL) { //if linked list is empty
        r = (node*)malloc(sizeof(node));
        r -> next = NULL;
        r -> data = val;
        return r;
    }

    if (r -> data > val) { //not empty and lower value and upgrade root
        node* temp = (node*)malloc(sizeof(node));
        temp -> data = val;
        temp -> next = r;
        return temp;
    }

    node* iter = r;

    while (iter -> next != NULL && iter -> next -> data < val) { //jump last node and insert a node
        iter = iter -> next;
    }

    node* temp = (node*)malloc(sizeof(node));
    temp -> next = iter -> next;
    iter -> next = temp;
    temp -> data = val;
    return r;
}


int main()
{
    node* root;
    root = NULL;

    root = insert_contigous(root, 400);
    root = insert_contigous(root, 40);
    root = insert_contigous(root, 4);
    root = insert_contigous(root, 450);
    root = insert_contigous(root, 50);
    print_list(root);

    return 0;
}


