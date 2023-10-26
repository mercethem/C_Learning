#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "student.h"
#include "studentlist.h"
#include "mylibrary.h"


#define         NLIST       1000



int main()
{


//TESTS---|
//        |
//        |
//        |
//        |
//        V

//    Student s;
//    randomize();
//    ListHandle list = create_list();
//    for (int i = 0; i < 10; ++i)
//    {
//        set_student_random(&s);
//        print_student(&s);
//        push_front(list,&s);
//    }
//    printf("\n");
//
//    printf("List have got %zu students\n", get_size(list) );
//    print_list(list);
//
//    make_empty(list);
//
//    if(is_empty(list))
//        printf("List is empty!\n");
//
//
//


//    size_t n;
//    Student s;
//
//    printf("How many students add to list ? :\n");
//    scanf("%zu", &n);
//    ListHandle list = create_list();
//    randomize();
//
//    for (int i = 0; i < n; ++i)
//    {
//        set_student_random(&s);
//        push_front(list, &s);
//    }
//    printf("List have got %zu students\n", get_size(list));
//    _getch();
//    print_list(list);



//    size_t n;
//    Student s;
//    printf("How many students add to list :");
//    scanf("%zu", &n);
//
//    ListHandle list =  create_list();
//
//    for (size_t i = 0;  i < n; ++i)
//    {
//        set_student_random(&s);
//        push_front(list, &s);
//    }
//
//    while (!is_empty(list)){
//        printf("There are %zu students in the list\n", get_size(list));
//        print_list(list);
//        _getch();
//        system("cls");
//        pop_front(list);
//    }

    ListHandle a[NLIST];

    for (int i = 0; i < NLIST; ++i)
    {
        a[i] = create_list();
    }
    randomize();
    Student s;

    for (int i = 0; i < NLIST; ++i)
    {
        int n = rand() % 11 + 10;
        while (n--){
            set_student_random(&s);
            push_front(a[i], &s);
        }
    }

    for (int i = 0; i < NLIST; ++i)
    {
        printf("%d. list have got %zu student.\n", i + 1, get_size(a[i]));
        print_list(a[i]);
        (void)getchar();
        system("cls");
    }

    for (int i = 0; i < NLIST ; ++i)
    {
        destroy_list(a[i]);
    }


    return 0;
}