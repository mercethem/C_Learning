/**
  Normal termination : exit ===> exit(EXIT_SUCCESS) or exit(0) successful / exit(EXIT_FAILURE) or exit(1)
  Normal termination : atexit

  Abnormal termination : abort


  exit() (Guaranteed buffer flushing)
  abort() (NOT guaranteed buffer flushing)

   atexit() Uses stack method. It runs whatever functions it has marked, from the end to the beginning.
            min 32 functions


 */

#include <stdio.h>
#include <stdlib.h>


#define     SIZE    100

void f3(void)
{
    printf("f3 started\n");
//    exit(); //stopped prints work
    abort(); //stopped prints not work
    printf("f3 stopped\n");
}

void f2(void)
{
    printf("f2 started\n");
    f3();
    printf("f2 stopped\n");
}

void f1(void)
{
    printf("f1 started\n");
    f2();
    printf("f1 stopped\n");
}

int main()
{
    printf("main started\n");
    f1();
    printf("main stopped\n");

    exit(EXIT_SUCCESS);
}



