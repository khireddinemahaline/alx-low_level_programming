#include <stdio.h>
/**
 * main - Entery function
 *
 * Return: Alays 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
