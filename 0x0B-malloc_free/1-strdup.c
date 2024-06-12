#include "main.h"
#include <stdlib.h>
/*
 * @size: size of array
 * @c: caracter
 * Return: null or ptr
 *
 */

char *_strdup(char *str)
{
   char *ptr;
   int i;
   int j;

   for (i = 0; str[i] != '\0'; i++)
   {
      ;
   }
   ptr = (char *)malloc(sizeof(char) * (i + 1));

   if (ptr == NULL)
      return (NULL);
   
   for (j = 0; j < i; j++)
      ptr[j] = str[j];
   return(ptr);
}
