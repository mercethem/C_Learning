//
// Created by User on 18.04.2023.
//

#ifndef MYLIBRARY_MYLIBRARY_H
#define MYLIBRARY_MYLIBRARY_H



#define     isleap(y)       ((y) % 4 == 0 && ((y) % 400 == 0 || (y) % 100 != 0))
#define     randomize()     srand((unsigned)time(NULL))
#define     asize(x)        (sizeof(x) / sizeof(x[0]))

int         isprime (int val);
void        pline(void);
int         ndigit(int);
int         rand(void); //Seed value is 1
void        srand(unsigned int); //Changes the seed value of rand function


#endif //MYLIBRARY_MYLIBRARY_H
