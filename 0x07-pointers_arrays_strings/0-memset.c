#include <stdio.h>

/**
 * _memset - set in memory location
 * @s: sequnse of character
 * @b: the char will be in place
 * @n: the byte number
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
