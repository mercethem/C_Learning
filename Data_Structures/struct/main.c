#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define     SIZE    20


struct person
{
    long long identity_id;
    char name[SIZE];
    char surname[SIZE];
    int age;
};

typedef struct
{
    long long identity_id;
    char name[SIZE];
    char surname[SIZE];
    int age;
} person;

int main()
{
    // Struct Direct
    struct person person1;
    person1 . identity_id = 12345678901;
    strcpy(person1 . name, "Name1");
    strcpy(person1 . surname, "Surname1");
    person1 . age = 11;

    // Struct Undirect
    struct person* person2 = (struct person*)malloc(sizeof(struct person));
    person2 -> identity_id = 12345678902;
    strcpy(person2 -> name, "Name2");
    strcpy(person2 -> surname, "Surname2");
    person2 -> age = 22;

    // Struct with TypeDef  - Direct
    person person3;
    person3.identity_id = 12345678903 ;
    strcpy(person3 . name, "Name3");
    strcpy(person3 . surname, "Surname3");
    person3 . age = 33;

    //  Struct with Typedef - Undirect
    person* person4 = (person*)malloc(sizeof(person));
    person4 -> identity_id = 12345678904;
    strcpy(person4 -> name, "Name4");
    strcpy(person4 -> surname, "Surname4");
    person4 -> age = 44;

    printf("Person 1: %llu %s %s %i\n", person1 . identity_id, person1 . name, person1 . surname, person1 . age);
    printf("Person 2: %llu %s %s %i\n", person2 -> identity_id, person2 -> name, person2 -> surname, person2 -> age);
    printf("Person 3: %llu %s %s %i\n", person3 . identity_id, person3 . name, person3 . surname, person3 . age);
    printf("Person 4: %llu %s %s %i\n", person4 -> identity_id, person4 -> name, person4 -> surname, person4 -> age);
}
