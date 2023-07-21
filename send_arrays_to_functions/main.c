/**
 void func(const T* ptr, int size); //getter
 void func(T* ptr, int size);       //setter

 void func(T* ptr, size_t size); //usually use like this type so standard type def using

 */


#include <stdio.h>


#define     SIZE    10


//void print_array(const int* p, int size)
//{
//    for (int i = 0; i < size; ++i) {
//        printf("%d ", p[i]);
//    }
//    printf("\n");
//}


void print_array(const int* p, int size) //PROFESSIONAL USING
{
    while (size--) {
        //printf("%d ", *p);
        //*p++;
        printf("%d ", *p++); //PROFESSIONAL USING
    }
    printf("\n");
}

int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_array(a, 5);
    print_array(a + 2, 5);
    print_array(a + SIZE -5, 5 );

    int idx;
    int n;

    printf("which index starts and how many variable ?");
    scanf("%d%d", &idx, &n);

    print_array(a + idx, n);


    return 0;
}
