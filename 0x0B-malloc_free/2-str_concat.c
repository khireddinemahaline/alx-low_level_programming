#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*
*
*/

char *str_concat(char *s1, char *s2)
{
    int i,j,k,n;
    int len = 0;
    char *ptr;

    for (i = 0; s1[i] != '\0'; i++)
        ;
    for (j = 0; s2[j] != '\0'; j++)
        ;
    ptr = (char *)malloc(sizeof(char) * (i + j + 1));

    for (k = 0; s1[k] != '\0'; k++)
    {
        ptr[k] = s1[k];
    }

    
    for (n = k; n < (i + j); n++)
    {
        ptr[n] = s2[len];
        len++;
    }
    return (ptr);
}