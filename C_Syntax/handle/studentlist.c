#include <stdio.h>
#include <stdlib.h>
#include "studentlist.h"
#include "student.h"

typedef struct Node{ //self referential structure
    Student s; //data
    struct Node* pnext;
}Node;

static Node* gpfirst = NULL;
static size_t gcount = 0;

size_t get_size(void)
{
    return gcount;
}

int is_empty(void)
{
    return gpfirst == NULL;
}

void print_list(void)
{
    for (Node* p = gpfirst; p != NULL; p = p-> pnext){
        print_student(&p->s);
    }
    printf("-----------------------------------------------------------\n");
}

void push_front(const Student* p)
{
    Node* pnewnode = (Node*)malloc(sizeof(Node));
    if(!pnewnode){
        printf("Out of memory!\n");
        exit(EXIT_FAILURE);
    }

    pnewnode->s = *p;
    pnewnode->pnext = gpfirst;
    gpfirst = pnewnode;
    ++gcount;
}

void get_first(Student* p)
{
    if(is_empty()){
        printf("List is empty!\n");
        exit(EXIT_FAILURE);
    }
    *p = gpfirst->s;
}

void pop_front(void)
{
    if(is_empty())
    {
        printf("List is empty!\n");
        exit(EXIT_FAILURE);
    }
    Node* ptemp = gpfirst;
    gpfirst = gpfirst->pnext;
    free(ptemp);
    --gcount;
}

void make_empty(void)
{
    while (!is_empty())
        pop_front();
}