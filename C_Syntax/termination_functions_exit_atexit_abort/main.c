/**
  Normal termination : exit ===> exit(EXIT_SUCCESS) or exit(0) successful / exit(EXIT_FAILURE) or exit(1)
  Normal termination : atexit

  Abnormal termination : abort


  exit() (Guaranteed buffer flushing)
  abort() (NOT guaranteed buffer flushing)

   atexit() Uses stack method. It runs whatever functions it has marked, from the end to the beginning.


 */

#include <stdio.h>
#include <stdlib.h>


#define     SIZE    100

void f1(void){
    printf("f1 started\n");

    printf("f1 stopped\n");
}
void f2(void){
    printf("f2 started\n");

    printf("f2 stopped\n");
}
void f3(void){
    printf("f3 started\n");

    printf("f3 stopped\n");
}


int main()
{
    atexit(f1); //equal to atexit(&f1);
    atexit(f2);
    atexit(f3);

    exit(EXIT_FAILURE);


    return 0;
}
