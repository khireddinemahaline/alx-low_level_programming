#include "main.h"
/**
*
*
*/
void puts_half(char *str)
{
    int i;
    int j = 0;

    while (str[j] != '\0')
        j++;
    for (i = (j+1) / 2 ; i < j; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');   
}