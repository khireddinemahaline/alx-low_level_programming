#include "main.h"

/**
 * print_last_digit - function
 * @c: int value
 * Return: last digit
 *
 */
int print_last_digit(int c)
{
	int a;

	if (c < 0)
		c = -c;

	a = c % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
