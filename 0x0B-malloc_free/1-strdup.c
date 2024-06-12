#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: caracter
 * Return: null or ptr
 *
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j;

	if (str == NULL)
		return (NULL)
	for (i = 0; str[i] != '\0'; i++)
		;
	ptr = (char *)malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		ptr[j] = str[j];
	return (ptr);
}
