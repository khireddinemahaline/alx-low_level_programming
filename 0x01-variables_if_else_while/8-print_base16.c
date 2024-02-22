#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;
	char ch;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (ch = 'A'; ch <= 'F'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
