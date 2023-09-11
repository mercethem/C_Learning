#include <stdio.h>
#include <string.h>

union student {
    char name[20];
    int number;
    float score;

};

typedef union {
    char name[20];
    int number;
    float score;
} student;

int main(){

    printf("Boyut: %llu Byte \n", sizeof(union student));

    union student student1;

    strcpy(student1.name, "Name1");
    printf("Name: %s \n", student1.name);

    student1.number = 148;
    printf("Number: %d \n", student1.number);

    student1.score = 85.5f;
    printf("Score: %f \n", student1.score);

    // Typedef ile Kullanım
    student student2;
    strcpy(student2.name, "Name2");

    printf("Student Name: %s \n", student2.name);

    student2.score = 45;
    printf("Student Age: %f", student2.score);

    return 0    ;
}