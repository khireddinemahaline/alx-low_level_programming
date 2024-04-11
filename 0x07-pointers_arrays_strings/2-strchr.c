#include <stdio.h>
/**
 * _strchr - function return the first oocured
 * @s: the string
 * @c: the character
 * Return: return first occured
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
