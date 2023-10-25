#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mylibrary.h"
#include "student.h"


Student* set_student_random(Student* p){
    p->no = rand() % 10000;
    strcpy(p->name, random_name());
    strcpy(p->surname, random_surname());
    strcpy(p->town, random_town());
    set_date_random(&p->bdate);

    return p;
}

void print_student(const Student* p){
    printf("%-5d  %-16s  %-16s    %s", p->no, p->name, p->surname, p->town);
    print_date(&p->bdate);
}

int cmp_student(const Student* p1, const Student* p2)
{
    int cmpresult = strcmp(p1->name, p2->name);

    if(cmpresult)
        return cmpresult;

    cmpresult = strcmp(p1->surname, p2->surname);

    if(cmpresult)
        return cmpresult;

    cmpresult = strcmp(p1->town, p2->town);

    if(cmpresult)
        return cmpresult;

    cmpresult = cmp_date(&p1->bdate, &p2->bdate);

    if(cmpresult)
        return cmpresult;

    return p1->no - p2->no;

}
