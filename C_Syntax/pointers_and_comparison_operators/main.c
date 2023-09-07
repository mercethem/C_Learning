/**

    Pointers can be operand of comparison operators!

    ==, != can be use by pointers
    FOR TRUE
    1) Both of two pointers be same subject's address ==> int x = 10; int y = 20; int* p1; int* p2; p1 = &x; p2 = &x;
    2) Both of two pointers are finish address of same array ==>    int a[5] = {0, 1, 2, 3, 4, 5}; int* p_end = a + 5;
                                                                int* p = a; int* r = a + 5;

    3) Both of two pointers are NULL pointer ==> int x = 10; int* p1; int* p2; p1 = NULL; p2 = NULL;


    >, <, >=, <= can be use by pointers (True way is both of two pointers be same array's variable)
    int a[10] = { 0 }; int* p1 = a + 5; int* p2 = a + 9; if(p1 < p2); result is TRUE(1)
    int a = 5; int b = 55; int* p1 = &a; int* p2 = &b; if(p1 < p2);===>UNSPECIFIED BEHAVIOR!!! (not UNDEFINED BEHAVIOR)

 */
