#include "main.h"
/**
 * print_most_numbers - print all single number not 2 and 4
 */
void print_most_numbers(void)
{
	int n;
	int i;

	for (n = 48; n <= 57; n++)
		if (n != 50 || n != 52)
			_putchar(n);
	_putchar('/n');
}
