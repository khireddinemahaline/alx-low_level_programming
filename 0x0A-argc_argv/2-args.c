#include <stdio.h>

/**
 * main - prints the argument of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc - 1; i++)
	{
		printf("%s\n",argv[i])
	} 

	return (0);
}
