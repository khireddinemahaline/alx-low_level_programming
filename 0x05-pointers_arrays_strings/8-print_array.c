#include "main.h"
#include <stdio.h>
/**
* print_array - print array values
* @a: array
* @n: the number of elements in array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
