#include <stdio.h>
#include "mylibrary.h"
#include "student.h"
#include "date.h"

struct Data{ //Self-referential structure (Generally uses in data structure)
    int x;
    struct Data* p;
    /**
     ATTENTION: struct Data p; That is illegal!!! That p is not a pointer!
     */
};


int main()
{
    randomize();

    Student s;

    while (1){
        set_student_random(&s);
        print_student(&s);
        (void)getchar();
    }



    return 0;
}

