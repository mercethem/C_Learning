/**

 Lexicographical Compare Algorithm (Container comparison)
 Equal Situation ===> both lengths are same and all values same
 bigger or lower ===> compare index by index, when indexes not equal then bigger index is bigger lower indexes lower
    Example =   1 3 6 9 8 1     1  3  6  9
                1 3 6 3         1  3  6  3      ===> which one of them bigger 9 so first integer bigger!
                                =  =  =  !=

    Example2 =  1 3 6 9 8 1     1  3  6  9  8
                1 3 6 9         1  3  6  9  -    ===> which one of them bigger 8 so first integer bigger!
                                =  =  =  =  !=

    Example3 =  1 3 6 9 8 1     1
                - - - -         -                ===> which one of them bigger 1 so first integer bigger!
                                !=

    Example =   L i b e r t y   L
                O k             O                ===> which one of them bigger 'O' so second literal  bigger!
                                !=                    That is vocabulary compare about before and after for letters


 C Compare System
 --------------------------
 int compare(int x, int y);
 if (x > y) retval > 0
 if (x < y) retval < 0
 if (x == y) retval == 0
 --------------------------

 int strcmp(const char* pleft, const char* pright);
 Equal style ===> if(strcmp(str1, str2) == 0) or if(!strcmp(str1, str2))
 Not equal style ===> if(strcmp(str1, str2) != 0) or if(strcmp(str1, str2))
 Bigger than style ===> if(strcmp(str1, str2) > 0) or if(strcmp(str1, str2) < 0)


 */


#include <stdio.h>
#include <string.h>


int main()
{

    return 0;
}
