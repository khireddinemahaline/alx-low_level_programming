#include "main.h"
/**
 * print_alphabet_x10 - function print alpha in lower case
 *
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		i++;
		_putchar('\n');
	}
}
