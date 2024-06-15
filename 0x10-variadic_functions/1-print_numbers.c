#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
    int unsigned i;
    va_list args;

    va_start (args, n);
    
    for (i = 0; i < n; i++)
    {
        int var = va_arg(args, int);
        if (i < (n-1))
        {
            printf("%d%s", var, separator);
        }
        else
            printf("%d", var);
        
    }
    putchar('\n');
    va_end(args);
}