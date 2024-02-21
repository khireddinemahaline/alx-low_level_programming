#include <stdio.h>
/**
 * main - Entery function
 *
 * Return: Alays 0 (Success)
 */

int main(void)
{
	char ch;
	char cap;

	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);
	for (cap = 'A'; cap <= 'Z'; cap++)
		putchar(cap);
	putchar('\n');
	return (0);
}
