#include "main.h"
/**
*
*
*/
char *_strcpy(char *dest, char *src)
{
    int i = 0, j;
    char temp;

    while (src[i] != '\0')
    {
        i++;
    }
    for (j = 0; j < i; j++)
    {
        temp = src[j];
        dest[j] = temp;
    }
    return (dest);
}