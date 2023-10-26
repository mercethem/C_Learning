
#ifndef HANDLE_STUDENTLIST_H
#define HANDLE_STUDENTLIST_H

#pragma once

#include <stddef.h>

struct List;
struct Student;
typedef struct Student Student;
typedef struct List* ListHandle;

ListHandle create_list(void);
void destroy_list(ListHandle);

void push_front(ListHandle, const Student* p);
void pop_front(ListHandle);
void get_first(ListHandle, Student* p);
void print_list(ListHandle);
size_t get_size(ListHandle);
int is_empty(ListHandle);
void make_empty(ListHandle);




#endif //HANDLE_STUDENTLIST_H
