
#ifndef HANDLE_STUDENTLIST_H
#define HANDLE_STUDENTLIST_H

#pragma once

#include <stddef.h>

struct Student;
typedef struct Student Student;

void push_front(const Student* p);
void pop_front(void);
void get_first(Student* p);
void print_list(void);
size_t get_size(void);
int is_empty(void);
void make_empty(void);




#endif //HANDLE_STUDENTLIST_H
