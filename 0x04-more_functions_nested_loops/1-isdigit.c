#include "main.h"
/**
 * _isdigit - function print if print an digit or not
 * @c: cahr or number we could pass
 * Return: 1 if true digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
