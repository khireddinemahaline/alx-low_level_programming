#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    
    char d[11] = "Holberton!";
    printf("%s\n", d);
    rev_string(d);
    printf("%s\n", d);
    return (0);
}