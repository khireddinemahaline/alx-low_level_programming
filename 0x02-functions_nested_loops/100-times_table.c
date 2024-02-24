#include "main.h"

/**
 *
 *
 *
 *
 */
void print_times_table(int n)
{
	int i = 0, j, k;

	if ((n < 15) && (n > 0))
	{
		while (i <= n)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
				{
					_putchar(k == '0');
				}
				if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
