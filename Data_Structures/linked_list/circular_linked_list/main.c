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
    node* iter = r;
    printf("%d ", iter -> data);
    while (iter != r) {
        printf("%d ", iter -> data);
        iter = iter -> next;
    }
    printf("\n");
}

void insert_node(node* r, int val)
{
    node* iter = r;
    while (iter -> next != r) {
        iter = iter -> next;
    }

    iter -> next = (node*)malloc(sizeof(node));
    iter -> next -> data = val;
    iter -> next -> next = r;
}

node* delete_node(node* r, int val)
{
    node* temp;
    node* iter = r;

    if (r -> data == val) {
        while (iter -> next != r) {
            iter = iter -> next;
        }
        iter -> next = r -> next;
        free(r);
        //r = iter -> next;
        //printf("%d deleted in list.\n", val);//todo
        return iter-> next;
    }
    while (iter -> next != r && iter -> next -> data != val) {
        iter = iter -> next;
    }
    if (iter -> next == r) {
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
        r -> next = r;
        r -> data = val;
        return r;
    }

    if (r -> data > val) { //not empty and lower value and upgrade root
        node* temp = (node*)malloc(sizeof(node));
        temp -> data = val;
        temp -> next = r;
        node* iter = r;
        while (iter -> next != r)
            iter = iter -> next;
        iter -> next = temp;
        return temp;
    }

    node* iter = r;

    while (iter -> next != r && iter -> next -> data < val) { //jump last node and insert a node
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
    root = delete_node(root, 450);
    print_list(root);

    return 0;
}


