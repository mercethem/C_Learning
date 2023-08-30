#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "mylibrary.h"


typedef int (* FTEST)(int);


int main()
{
    FTEST p_function[] = {&islower, &isupper, &isalpha, &isdigit, &isalnum, &isxdigit, &ispunct,
            &isspace, &isblank, &isgraph, &iscntrl};

    const char* p_function_names[] = {"islower", "isupper", "isalpha", "isdigit", "isalnum", "isxdigit",
            "ispunct", "isspace", "isblank", "isgraph", "iscntrl"};

    char entry[40];
    printf("Please enter a character:\n");
    int ch = getchar();
    printf("Which function call to?\n");
    scanf("%s", entry);

    size_t idx;

    for (idx = 0; idx < asize(p_function_names); ++idx) { // equal to ===> for (idx = 0; idx < asize(p_function_names) && strcmp(p_function_names[idx], entry); ++idx)
        if (!strcmp(p_function_names[idx], entry))        //                   ; //null statement
            break;                          //
    }
    if (idx == asize(p_function_names)) {
        printf("%s is not exist!", entry);
    }
    else if (p_function[idx](ch)) {
        printf("%s is OK for %c character.", entry, ch);
    }
    else {
        printf("%s is NOT OK! %c character!", entry, ch);
    }

    return 0;
}
