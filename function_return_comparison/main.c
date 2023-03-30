/**
 if(func1(x) == func2(y)) // You can not use like this because return value non-zero for true and zero for false
 if(!!func1(x) == !!func2(y))   function(x) TRUE  = NON-ZERO    ||| !!NON-ZERO = 1 ---> use this
                                            FALSE = ZERO        ||| !!ZERO     = 0 ---> use this
*/

