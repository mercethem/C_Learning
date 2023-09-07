/**

 void* is a generic pointer but void** is not a generic pointer!

 int x = 10;
 double dval = 2.4;

 void* vptr;

 void** vp = &vptr;
 *vp = &x;

 **vp = 10; //INVALID!!! because of **vp is vptr
 *vp = 10; //VALID

 If that is not a void** but that is int** or double** or any pointer that rule is can be VALID!!! But that is void**!!
 As result, you can assign *vp but you can not assigned **vp because that dereferencing is Invalid;


 */


#include <stdio.h>

int main()
{
    printf("Hello, World!\n");
    return 0;
}
