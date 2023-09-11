#include <stdio.h>
#include <stdlib.h>


//struct of linked list
struct node
{
    int data;
    struct node* next;
};

//head and tail
struct node* head = NULL;
struct node* tail = NULL;

//add node
void add_node_tail(int mydata)
{

    //if linked list is empty
    if (!head) {
        struct node* new = (struct node*)malloc(sizeof(struct node));
        new -> data = mydata;
        new -> next = NULL;

        head = tail = new;
    }
    else {
        struct node* new = (struct node*)malloc(sizeof(struct node));
        new -> data = mydata;
        new -> next = NULL;

        tail -> next = new;
        tail = new;
    }
}

void add_node_head(int mydata)
{
    //if linked list empty
    if (!head) {
        struct node* new = (struct node*)malloc(sizeof(struct node));
        new -> data = mydata;
        new -> next = NULL;

        head = tail = new;
    }
    else { //linked list not empty
        struct node* new = (struct node*)malloc(sizeof(struct node*));
        new -> data = mydata;
        new -> next = head;

        head = new;
    }
}

void print_list()
{
    if (head == NULL) {
        printf("Linked list is empty!\n");
    }
    else {
        printf("Linked List : ");

    }
    struct node* index = head;

    while (index) {
        printf("%d - ", index -> data);
        index = index -> next;
    }
    printf("\n");
}

void delete_node(int mydata)
{

    struct node* prev = NULL;
    struct node* index = head;
//if linked list is empty

    if (head == NULL) {
        printf("Linked list is empty!\n");
        return;
    }
    if (head -> data == mydata) {
        struct node* temp = head;
        head = head -> next;
        free(temp);
        return;
    }

    while (index && index -> data != mydata) {
        prev = index;
        index = index -> next;
    }

    if (!index) {
        printf("Data not found.\n");
        return;
    }

    prev -> next = index -> next;

    if (tail -> data == mydata) {
        tail = prev;
    }

    free(index);
}

int main()
{

    add_node_tail(10);
    add_node_tail(14);
    add_node_tail(16);
    add_node_tail(19);

    add_node_head(15);

    add_node_tail(30);
    print_list();

    delete_node(15);
    delete_node(10);
    delete_node(14);
    delete_node(16);
    delete_node(19);
    delete_node(30);
    print_list();

    delete_node(15);

    add_node_tail(30);
    print_list();

    return 0;
}
