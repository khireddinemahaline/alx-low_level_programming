#include <stdio.h>
/**
 * print_line - print a line with _
 * @n: the number of '_' time.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	else
	{
		for (i = 1; i <= n; i++)
			printf("_");
		printf("\n");
	}
}
