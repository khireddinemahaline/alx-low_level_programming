#include <ctype.h>
#include "main.h"
/**
 * _islower - Check lower case char
 * @c: the char value
 * Return: 1 if sucess 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
