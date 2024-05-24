<<<<<<< HEAD
#include <stdio.h>
=======
#include "main.h"
>>>>>>> a60ac3908668e9f31953e168da2a7167bb5c0a75
/**
 * _puts - function return string in stdout
 * @str: string value
 *
 */
void _puts(char *str)
{
<<<<<<< HEAD
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
=======
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
>>>>>>> a60ac3908668e9f31953e168da2a7167bb5c0a75
	}
	_putchar('\n');
}
