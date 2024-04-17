#include "main.h"

/**
* rev_string - reverse string
* @s: the string
*/

void rev_string(char *s)
{
    char temp;
    int len = 0, length, j;

    while (s[len] != '\0')
        len++;
    length = len - 1;
    for (j = 0; j <= length; j++)
    {
        temp = s[j];
        s[j] = s[length];
        s[length--] = temp;
    }
}

