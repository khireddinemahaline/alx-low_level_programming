#include "main.h"
/**
 * _isupper - a function return if a latter is upper or not
 * @c: an integer passed using ASCII here
 * Return: 1 if is true 0 if false
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
