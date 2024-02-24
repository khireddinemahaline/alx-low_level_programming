#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function print int number from n to 98
 * @n: start point
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n; n < 98; n++)
			printf("%i, " , n);
	}
	else if (n > 98)
	{
		for (n; n > 98; n--)
			printf("%i, " , n);
	}
	else
		printf("%i\n" , n);
}
