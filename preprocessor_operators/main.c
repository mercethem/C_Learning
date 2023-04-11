
// The following macros is not mine and this codes is upper level then me.
// I am studying for learn to them.(07.04.2023)

/**
    preprocessor operators are {#, ##, defined} //REMEMBER Preprocessor do not use name look up or scope
    #   ---> Stringification operator: Unary prefix preprocessor changed like #x ---> "x"
    ##  ---> Token-pasting operator: Binary fix preprocessor changed like x##y ---> xy
    defined --->  Logic uni-prefix logic operator

    #define  PUBLIC/NODISCARD     ---> preprocessor deletes to PUBLIC
    #undefine // opposite to define!
    (That technic uses any programmer want to read this code easily so for semantic)

 */

#include <stdio.h>

#define         mprint(x)           printf(#x " = %d\n", x)
#define         create_max_function(type)           type getmax_##type(const type *p, int size) \
{\
    type max = *p; \
        for (int i = 0; i < size; ++i) \
            if (p[i] > max) \
                max = p[i]; \
        return max; \
}

create_max_function(int)

create_max_function(double)

create_max_function(long)

create_max_function(float)


int main()
{
    int a = 12;
    int b = 34;

    mprint(a * b); //a * b = 408

    int x[3] = {1, 3, 5,};

    printf("%d\n", getmax_int(x, 3));


    return 0;
}
