#include <stdio.h>
#include <string.h>


struct Employee
{
    int id;
    char name[20];
    char surname[20];
    double wage;
};

int main()
{
    struct Employee x = {123456, "Helen", "Gage", 2100.5};
    struct Employee* p = &x;

    printf("%d\n%s\n%s\n%f\n", x.id, x.name, x.surname, x.wage);
    p->id = 654321;
    strcpy(p->name, "George");
    strcat(p->surname, "rball");
    p->wage += 110.7;

    printf("%d\n%s\n%s\n%f\n", x.id, x.name, x.surname, x.wage);

    return 0;
}
