#include <stdio.h>

/**
 * _memset - set in memory location
 * @s: sequnse of character
 * @b: the char will be in place
 * @n: the byte number
 * Return: the new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
