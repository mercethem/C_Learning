//About C Operator Precedence
/** This table is from here (https://en.cppreference.com/w/c/language/operator_precedence#cite_note-2)
 *

_____________________________________________________________________________________________________
------------------------------------------------------------------------------------| Associativity |
_____________________________________________________________________________________________________
        ++ -- 	        Suffix/postfix increment and decrement                      |               |
        ()  	        Function call                                               |               |
        [] 	            Array subscripting                                          |               |
1       .   	        Structure and union member access                           | Left-to-right |
        -> 	            Structure and union member access through pointer           |               |
        (type){list} 	Compound literal(C99)                                       |               |
------------------------------------------------------------------------------------|---------------|
        ++ -- 	        Prefix increment and decrement	Right-to-left               |               |
        + - 	        Unary plus and minus                                        |               |
        ! ~ 	        Logical NOT and bitwise NOT                                 |               |
2      (type)         	Cast                                                        | Right-to-left |
        * 	            Indirection (dereference)                                   |               |
        &           	Address-of                                                  |               |
        sizeof      	Size-of                                                     |               |
        _Alignof 	    Alignment requirement(C11)                                  |               |
------------------------------------------------------------------------------------|---------------|
3 	    * / % 	        Multiplication, division, and remainder                     | Left-to-right |
------------------------------------------------------------------------------------|---------------|
4 	    + - 	        Addition and subtraction                                    | Left-to-right |
------------------------------------------------------------------------------------|---------------|
5   	<< >> 	        Bitwise left shift and right shift                          | Left-to-right |
------------------------------------------------------------------------------------|---------------|
6 	    < <= 	        For relational operators < and ≤ respectively               | Left-to-right |
        > >= 	        For relational operators > and ≥ respectively               |               |
------------------------------------------------------------------------------------|---------------|
7      	== != 	        For relational = and ≠ respectively                         | Left-to-right |
------------------------------------------------------------------------------------|---------------|
8   	& 	            Bitwise AND                                                 | Left-to-right |
------------------------------------------------------------------------------------|---------------|
9 	    ^           	Bitwise XOR (exclusive or)                                  | Left-to-right |
------------------------------------------------------------------------------------|---------------|
10     	| 	            Bitwise OR (inclusive or)                                   | Left-to-right |
------------------------------------------------------------------------------------|---------------|
11 	    &&          	Logical AND                                                 | Left-to-right |
------------------------------------------------------------------------------------|---------------|
12   	||          	Logical OR                                                  | Left-to-right |
------------------------------------------------------------------------------------|---------------|
13 	    ?:          	Ternary conditional                                         | Right-to-left |
------------------------------------------------------------------------------------|---------------|
       	= 	            Simple assignment                                           |               |
        += -= 	        Assignment by sum and difference                            |               |
14      *= /= %=    	Assignment by product, quotient, and remainder              | Right-to-left |
        <<= >>= 	    Assignment by bitwise left shift and right shift            |               |
        &= ^= |= 	    Assignment by bitwise AND, XOR, and OR                      |               |
------------------------------------------------------------------------------------|--------------- |
15  	, 	            Comma                                                       | Left-to-right |
-----------------------------------------------------------------------------------------------------




 */