#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry function
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (last_digit < n % 10)
		printf("Last digit of %d is %d and is greater than 5", n, n % 10);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0", n, n % 10);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, n % 10);
	return (0);
}
