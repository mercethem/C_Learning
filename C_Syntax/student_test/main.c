#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mylibrary.h"
#include "date.h"
#include "student.h"

int scmp(const void* vp1, const void* vp2)
{
    return cmp_student((const Student*) vp1, (const Student*)vp2);
}

int main()
{
    size_t n;

    printf("How much student :");
    scanf("%zu", &n);
    Student *pd = (Student*)malloc(n* sizeof(Student));
    if(!pd){
        printf(stderr, "Out of memeory!\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n ; ++i)
    {
        set_student_random(pd + i);
    }
    clock_t start = clock();
    qsort(pd, n, sizeof(*pd), &scmp);
    //qsort(pd, n, sizeof(*pd), (int (*)(const void*, const void*))cmp_student);
    clock_t end = clock();
    printf("Sorting finished %f second\n", (double)(end - start) / CLOCKS_PER_SEC);
    clear_input_buffer();
    (void*)getchar();

    for (size_t i = 0; i < n; ++i)
    {
        print_student(pd + i);
    }

    free(pd);






    return 0;
}
