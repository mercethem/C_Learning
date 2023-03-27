#include <stdio.h>
/**

 Comma operator is lowest priority, binary infix operator and R Value Expression

 int a = 5, b = 10, c = 20; //That commas are not operator
 void func(int x, int y){} //That comma is not operator
 func(a,b); //That comma is not operator
 int ar[] = {1, 2, 3, 8, 21}; //That commas are not operator

 There is side effect later than left operand of comma operator's. Exp. ---> ++a, b = a, c = a * b;

 int c;
 while( c = getchar(), c != '\n'){} First rule left operand done and second while loop's second operand done and the last
 rule is while loop use right operand because comma operator create left operand.

 int x = 10, y = 5;
    int temp = 0;
    if (x>y)
        temp = x, x = y, y = temp;
 func((a , b));

 */
