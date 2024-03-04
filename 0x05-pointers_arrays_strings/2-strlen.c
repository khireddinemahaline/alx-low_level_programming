#include <stdio.h>

/**
 * _strlen - function return the length of a string
 * @s: pinter
 * Return: the length of string
 *
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
