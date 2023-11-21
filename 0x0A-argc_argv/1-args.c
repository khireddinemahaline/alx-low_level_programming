#include <stdio.h>

/**
 * main - entry function
 * @argc : number of arg
 * @argv: atg
 *
 * Return 0 : successful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
