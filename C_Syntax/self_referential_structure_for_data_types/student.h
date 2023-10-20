//
// Created by User on 20.10.2023.
//

#ifndef SELF_REFERENTIAL_STRUCTURE_FOR_DATA_TYPES_STUDENT_H
#define SELF_REFERENTIAL_STRUCTURE_FOR_DATA_TYPES_STUDENT_H

#pragma once

#include "date.h"

typedef struct Student{
    int no;
    char name[16];
    char surname[24];
    char town[20];
    Date bdate;
}Student;


Student* set_student_random(Student*);
void print_student(const Student*);
int cmp_student(const Student*, const Student*);





#endif //SELF_REFERENTIAL_STRUCTURE_FOR_DATA_TYPES_STUDENT_H
