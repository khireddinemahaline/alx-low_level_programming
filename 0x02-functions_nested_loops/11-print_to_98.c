#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function print int number from n to 98
 * @n: start point
 *
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
}
