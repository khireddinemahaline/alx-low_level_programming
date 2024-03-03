/**
 * swap_int - sunction that swape integers a and b
 * @a: first integer
 * @b: seconde integer
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
