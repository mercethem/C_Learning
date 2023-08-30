#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "mylibrary.h"


typedef int (* FTEST)(int);


int main()
{
    FTEST fa[] = {&islower, &isupper, &isalpha, &isdigit, &isalnum, &isxdigit, &ispunct,
            &isspace, &isblank, &isgraph, &iscntrl};

    const char* pa[] = {"islower", "isupper", "isalpha", "isdigit", "isalnum", "isxdigit",
            "ispunct", "isspace", "isblank", "isgraph", "iscntrl"};

    char entry[40];
    printf("Please enter a character:\n");
    int ch = getchar();
    printf("Which function call to?\n");
    scanf("%s", entry);

    size_t idx;

    for (idx = 0; idx < asize(pa); ++idx) { // equal to ===> for (idx = 0; idx < asize(pa) && strcmp(pa[idx], entry); ++idx)
        if (!strcmp(pa[idx], entry))        //                   ; //null statement
            break;                          //
    }
    if (idx == asize(pa)) {
        printf("%s is not exist!", entry);
    }
    else if (fa[idx](ch)) {
        printf("%s is OK for %c character.", entry, ch);
    }
    else {
        printf("%s is NOT OK! %c character!", entry, ch);
    }

    return 0;
}
