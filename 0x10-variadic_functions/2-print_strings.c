#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
    int unsigned i;
    va_list args;
    va_start (args, n);

    for (i = 0; i < n; i++)
    {
        char *var = va_arg(args, char *);
        if (var)
			printf("%s", var);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
    }
    putchar('\n');
    va_end(args);

}