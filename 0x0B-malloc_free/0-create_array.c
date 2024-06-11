#include "main.h"
#include <stdlib.h>
/*
 * @size: size of array
 * @c: caracter
 * Return: null or ptr
 *
 */

char *create_array(unsigned int size, char c)
{
   unsigned int i;
   char *ptr;

   ptr = malloc(size * sizeof(c));

  if (size == 0)
  {
  return (NULL);
  }
  for (i = 0; i < size; i++)
  {
    ptr[i] = c;
  }
  return (ptr);
}
