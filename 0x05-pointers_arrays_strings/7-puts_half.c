#include "main.h"
/**
*
*
*/
void puts_half(char *str)
{
    int i;
    int j = 0;
    int half;

    while (str[j] != '\0')
        j++;
    
    half = j / 2;
    for (i = half; i <= j; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');   
}