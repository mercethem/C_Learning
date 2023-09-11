#include <stdlib.h>
#include <stdio.h>


struct n
{
    int data;
    struct n* next;
};

typedef struct n node;

void print_list(node* root)
{
    node* iter = root;
    printf("%d ", iter -> data);
    iter = iter -> next;

    while (iter != root) {
        printf("%d ", iter -> data);
        iter = iter -> next;
    }
}

void add_list(node* root, int data)
{
    node* iter = root;
    while (iter -> next != root) {
        iter = iter -> next;
    }
    iter -> next = (node*)malloc(sizeof(int));
    iter -> next -> data = data;
    iter -> next -> next = root;
}

node* insert_contigous(node* root, size_t val)
{
    if (!root) { //if linked list is empty
        root = (node*)malloc(sizeof(node));
        root -> next = root;
        root -> data = val;
        return root;
    }

    if (root -> data > val) { //not empty and lower value and upgrade root
        node* temp = (node*)malloc(sizeof(node));
        temp -> data = val;
        temp -> next = root;
        node* iter = root;
        while (iter -> next != root) {
            iter = iter -> next;
            iter -> next = temp;
        }
        return temp;
    }

    node* iter = root;

    while (iter -> next != root && iter -> next -> data < val) { //jump last node and insert a node
        iter = iter -> next;
    }
    node* temp = (node*)malloc(sizeof(node));
    temp -> next = iter -> next;
    iter -> next = temp;
    temp -> data = val;
    return root;
}

node* delete(node* root, size_t val)
{
    node* temp;
    node* iter = root;

    if (root -> data == val) {
        while (iter -> next != root) {
            iter = iter -> next;
        }
        iter -> next = root -> next;
        free(root);
        return iter -> next;
    }
    while (iter -> next != root && iter -> next -> data != val) {
        iter = iter -> next;
    }
    if (iter -> next == root) {
        printf("Not found!");
        return root;
    }

    temp = iter -> next;
    iter -> next = iter -> next -> next;
    free(temp);
    return root;
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
    root = delete(root, 50);
    print_list(root);
    root = delete(root, 999);
    print_list(root);
    root = delete(root, 4);
    print_list(root);
    root = delete(root, 450);
    print_list(root);


    return 0;
}
