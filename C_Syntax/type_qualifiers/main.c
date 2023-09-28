/**

 const(C/C++) : const correctness is important! Const elements just readable not writable so you can not modify/immutable!
                const int x = 10; so const is an oxymoronic term. (non-modifiable/immutable variable!)
                L value expression and R value expression in C and some expressions are modifiable some ones non-modifiable.
                As result const keyword use only for non-modifiable L value(variable)!
                Some programmers says about const : not set just get!

                There are 3 reason use const keyword
                1) If there will be a logic error when you change a value(for example lookup table (prime numbers table))
                2) Compiler do best optimisation for efficiency
                3) Helps to yourself and helps to who review to our code

                if you cover syntax error for const than will be UB result is obey to to const!!!

                int x = 10;
                int y = 20;

                int* const p = &x;  //const pointer (top level const)so p is immutable, not *p.
                p = &y; //SYNTAX ERROR!!!
                *p = 45; //VALID!!!

                ------------------------------------------------------------------------------------------

                int x = 10;
                int y = 20;

                const int* p = &x;  //pointer to const int (low level const)so *p is immutable, not p.
                int const* p = &x;  //pointer to const int (low level const)so *p is immutable, not p.
                *p = 45; //SYNTAX ERROR!!!
                p = &y;  //VALID

                ------------------------------------------------------------------------------------------

                int x = 10;
                int y = 20;

                const int* const p = &x; //const pointer to const int (top level and low level const)
                p = &y; //SYNTAX ERROR!!!
                *P = 45; //SYNTAX ERROR!!!

                ATTENTION: void func(T *p); ===> set function, setter, mutator so that function want to pointer
                                                 for mutate you pointer
                           void func(const T *p); ===> get function, getter, non-mutator so that function want to
                                                just read your pointer just access

                ATTENTION: if you use call by value -void func(int x);- then will not important using const keyword
                            because there is not pointer!!!(people discuss for that situation but compilers optimize
                            the const keyword. If you use const than compilers delete that keyword)
                            As result it doesn't by anything!

               -----------------------------------------------------------------------------------------------------

               int x = 10;
               int y = 20;
               int* p = &x;
               int* q = &y;

               int** ptr = &p;     ===> All valid

               ptr = &q;
               *ptr = &y;
               **ptr = 76;

               -----------------------------------------------------------------------------------------------------

               int x = 10;
               int y = 20;
               int* p = &x;
               int* q = &y;

               int** const ptr = &p

               ptr = &q; //SYNTAX ERROR
               *ptr = &y;
               **ptr = 76;

               -----------------------------------------------------------------------------------------------------

               int x = 10;
               int y = 20;
               int* p = &x;
               int* q = &y;

               int*const* ptr = &p;

               ptr = &q;
               *ptr = &y; //SYNTAX ERROR
               **ptr = 76;

               -----------------------------------------------------------------------------------------------------

               int x = 10;
               int y = 20;
               int* p = &x;
               int* q = &y;

               const int** ptr = &p;

               ptr = &q;
               *ptr = &y;
               **ptr = 76; //SYNTAX ERROR

               -----------------------------------------------------------------------------------------------------

               int x = 10;
               int y = 20;
               int* p = &x;
               int* q = &y;

               const int*const*const ptr = &p;

               ptr = &q; //SYNTAX ERROR
               *ptr = &y; //SYNTAX ERROR
               **ptr = 76; //SYNTAX ERROR

               ATTENTION:   consts can be change one time two time or three time for what do you want to const
                            const int**ptr = &p;
                            const int*const* ptr = &p;
                            const int*const*const ptr = &p;
                            int*const*const ptr = &p;
                            int**const ptr = &p;
                            const int**const ptr = &p;

               -----------------------------------------------------------------------------------------------------
                return pointer:

                T* foo(void); ===>  value of sent that pointer can be change with this function
                const T* func(void); ===> value of sent that pointer can NOT be change with this function

                -----------------------------------------------------------------------------------------------------

                DIFFERENCE BETWEEN C TO C++

                const int x; //Syntax error in C++ because values have to initialize!
                                and that is external linkage in C
 ATTENTION ATTENTION ATTENTION:  global const variables are internal linkage in C++
                                 global const variables are external linkage in C

                int main()
                {

                    const int x; //wrong but valid so not syntax error in C.That is garbage value but you said to compiler
                                    i will not change garbage value! That is not makesense

                    const int x = 20; VALID C/C++

                    int a[x];//SYNTAX ERROR in C but VALID C++
                    int a[100] = {[a] = 45};//SYNTAX ERROR
                                                            ===> You can not use const values in need constant expression
                    switch (x){
                        case x;//SYNTAX ERROR
                    }

                }
------------------------------------------------------------------------------------------------------------------------


 volatile(C/C++) :  Volatile qualified variables!
                    interrupt handler can change to our variables (interrupt handling)
                    or external sources (peripheral hardware) can change our variables
                    that time uses volatile keyword.
                    Generally uses global scope!!!

                    volatile int x = 10; ===> that mean, with compiler that I don't want to optimize where x is used !!!
                    volatile int* p = (int*)0xba12; volatile is *p!
                    int* volatile p = (int*)0xba12; volatile is p!

                    int main()
                    {


                    }
 -----------------------------------------------------------------------------------------------------------------------
 restrict(C only)(C99) : There is no C++
                        Restrict keyword use efficiency in CPU (overlapped, vectorization)

                        restrict keyword is: There is only one pointer for that element,
                                             not another pointer for the element
                        You can not use before *!!! for example ===>    int* restrict p = &x;
                                                                        char* restrict p = &x ;

                                            func(int* restrict p, int* restrict q); ===> p and q is not a same element,
                                                                                        they are completely different!
                        ATTENTION : void func(int* restrict p, int* restrict q);
                                    func(&x, &y);//UNDEFINED BEHAVIOUR


 */