/**
 NULL is a macro.
 Not a keyword and not a identifier!
 NULL is define some libraries. (stdio, string, stdlib, stddef, time)
 exp: int main(){
      int* p = NULL; //That is SYNTAX ERROR because there is not a defined libraries upside.
      }

 NULL is a pointer literal! Please call the name of null: "NULL POINTER!" because of NULL or NULL POINTER are different!

 NEVER EVER NEVER, Do NOT reference a NULL Pointer reference to not a NULL Pointer
 exp: int main(){
      int x = NULL; // WRONG!!!
      int* x = NULL; //Right
      }

 If a pointer's value is NULL, that pointer is valid.
 NULL Pointer do not reference to any variable! (semantically)
 exp: int main(){
      int x = 10;
      int a = 5;

      int*p; //invalid
      int* q = NULL; //valid
      int* ptr = a + 5; //valid
      int* px = &x; //valid
      }

 De-referencing to a NULL Pointer (*ptr, ptr[i]) is UNDEFINED BEHAVIOR(UB)
 NULL Pointers can not to ++,**, arithmetical calculating are UNDEFINED BEHAVIOR(UB)

 Two different NULL Pointer's values are same
 exp: int* ptr1 = NULL; int* ptr2 = NULL; ptr1 equal to ptr2

 ATTENTION: Uninitialised global pointers and static local pointer variables are start life NULL Pointer!!!

 Pointers can use Logical operands, if(expr), while(expr),for(;expr;)
 exp: if(pointer), while(pointer) logic control check uses NULL or NOT NULL

 ATTENTION: if(ptr) equal to if(ptr != NULL) or if(ptr == NULL) equal to if(!ptr)

 ATTENTION: if initialize a pointer's value is '0' compilers cast implicit NULL!!!!
 exp: int* ptr = 0; equal to int* ptr = NULL;
 GENERALLY USES NULL, NOT '0' but can use not a syntax error!!!

 Compilers choose are sometimes are FFFF(real memory area) sometimes unreal memory area


 int main()
 {
    int x[10] = {1, 2} ===> {0, 0, 0, 0, 0, 0, 0, 0}
    int y[10] = {3, 4} ===> {0, 0, 0, 0, 0, 0, 0, 0}
    int* a[10] = {x, y} ===> { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL}
 }
 */

