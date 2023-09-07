int main()
{
    int x = 10;
    int y = 20;
    int z = 30;

    int* p = &x;
    int* q = &y;

    int** ptr = &p;

    /**
         int** const ptr = &p; ===> const is ptr as result you can not change ptr so &p
         int* const* ptr = &p; ===> const is *ptr as result you can not change *ptr so &x or arr[i]
         int const** ptr = &p; ===> const is **ptr as result you can not change **ptr so x
         const int** ptr = &p; ===> const is **ptr as result you can not change **ptr so x

         ATTENTION: You can use much more time const keyword such as ===> const int* const* const ptr = &p;
     */

    return 0;
}
