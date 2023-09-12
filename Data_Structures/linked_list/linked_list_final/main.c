#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node node;

void print_list(node* r)
{
    printf("Your Linked List : ");
    while (r) {
        printf("%d ", r -> data);
        r = r -> next;
    }
    printf("\n");
}

void insert_node(node* r, int val)
{
    while (r -> next) {
        r = r -> next;
    }
    r -> next = (node*)malloc(sizeof(node));
    r -> next -> data = val;
    r -> next -> next = NULL;
}

node* delete_node(node* r, int val)
{
    node* temp;
    node* iter = r;
    if (r -> data == val) {
        temp = r;
        r = r -> next;
        free(temp);
        printf("%d deleted in list.\n", val);
        return r;
    }
    while (iter -> next && iter -> next -> data != val) {
        iter = iter -> next;
    }
    if (iter -> next == NULL) {
        printf("%d is not in list.\n", val);
        return r;
    }
    temp = iter -> next;
    iter -> next = iter -> next -> next;
    free(temp);
    printf("%d is not in list.\n", val);
    return r;
}

node* insert_contigous(node* r, int val)
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

    root = delete_node(root, 50);
    print_list(root);

    root = delete_node(root, 999);
    print_list(root);
    root = delete_node(root, 4);
    print_list(root);
    root = delete_node(root, 540);
    print_list(root);
    root = delete_node(root, 40);
    print_list(root);
    return 0;
}


