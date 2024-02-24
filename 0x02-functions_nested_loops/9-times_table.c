#include "main.h"

/**
 * times_table - Function time 9 table
 *
 *
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i + 48) * (j + 48));
			_putchar(',');
		}
		_putchar('\n');
	}
}
