#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check string is alpha
 * @c: char value to be checked
 *
 * Return: 1 if success 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
