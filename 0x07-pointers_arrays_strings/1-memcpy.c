#include <stdio.h>

/**
 * _memcpy - copy memory area src to dest
 * @dest: the new copy memory area
 * @src: the real memory area
 * @n: byte number
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
