#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entery function
 *
 * Return: Always 0 (success)
 */

int positive_or_negative(int i)
{
	srand(time(0));
	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
	return (0);
}
