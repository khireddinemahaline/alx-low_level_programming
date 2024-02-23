#include "main.h"
/**
 *
 *
 *
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 51; j++)
		{
			_putchar(i);
			_putchar(j);
			_putchar(':');
			int k, n;
			for (k = 48; k <= 53; k++)
			{
				for (n = 48; n <= 57; n++)
				{
					_putchar(k);
					_putchar(n);
				}

			}
		}
		_putchar('\n')
	}
}
