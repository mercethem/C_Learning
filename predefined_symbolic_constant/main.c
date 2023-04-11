/**

 __LINE__ //Replace to which row it is ?
 __FILE__ //Replace to which file name it is ? (String literal)
 __DATE__ //Replace to what date it is ? (String literal) [Compile date]
 __TIME__ //Replace to what time it is ? (String literal) [Compile time]
 __STDC__ //C compilers always defines. (like C++ __cplusplus)
 __func__ //Replace to what that function name it is ? (String literal)

 */
#ifdef __STDC__
    int x = 1;
#endif

#include <stdio.h>
int main()
{
    printf("%d\n",__LINE__);
    printf("%s\n",__FILE__);
    printf("%s\n",__DATE__);
    printf("%s\n",__TIME__);
    printf("%s\n",__func__);
    printf("%d\n",x);
}


