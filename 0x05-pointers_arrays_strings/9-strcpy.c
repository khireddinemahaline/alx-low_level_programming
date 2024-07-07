#include "main.h"
/**
* _strcpy - copie strint to src
* @src: the source string
* @dest: distination string place
* Return: dest value
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;
	char temp;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		temp = src[j];
		dest[j] = temp;
	}
	dest[j] = '\0';
	return (dest);
}
