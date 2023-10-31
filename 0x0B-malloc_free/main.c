#include <stdlib.h>
#include <stdio.h>
#include "main.h"



int main()
{
 char *s;

    s = str_concat(NULL, NULL);
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
