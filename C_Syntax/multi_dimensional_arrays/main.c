/**

 There is no multi-dimensional arrays in C, actually just there isn't two dimension arrays just array in arrays
 a[10][20] ===> 10 units an array with 20 variables. We can say there is multi-dimensional arrays in C but there is not!!!

 */


#include <stdio.h>


int main()
{
    /**
     * int arr[10][20];
       first variable of arr ==> a[0]
       first variable of arr of first variable ==> a[0][0]

       int* p = &a[0][0]; equal to int* p = a[0]; "array decay" equal to int* p = (int*)a;

      ATTENTION : you can NOT use int* p = a; Because pointer arithmetics can not work like this!!!
      Because from a[0][0] to a[0][1] 80 bytes memory later  and from a[1][0] to a[1][1] 80 bytes memory later again(gcc)
      If you want to jump from an array to next array you want to use different pointer like down line
            int (*p)[4] = a;
            int (*p)[4] = a[0];

     */

    int a[10][4];


    int (*ptr)[4] = &a[0]; //equal to //int (*ptr)[4] = a;

    for (int i = 0; i < 10 ; ++i) {
        printf("%p %p %p\n", a + i, &a[i], ptr);
    }
    printf("%llu\n",sizeof(a));
    printf("%llu\n",sizeof(a[0]));
    printf("%llu\n",sizeof(a[0][0]));
    printf("%llu\n",sizeof(a) / sizeof (a[0])); //how much row get array
    printf("%llu\n",sizeof(a[0]) / sizeof (*a[0])); //how much column get array
    printf("%llu\n",sizeof(a[0]) / sizeof (a[0][0])); //how much column get array



    double d_arr[10][32];
    double (*d_arr_ptr)[32] = d_arr;
    for (int i = 0; i < 10; ++i) {
        printf("%p %p %p\n", &d_arr[i], d_arr + i, d_arr_ptr++);
    }





    return 0;
}
