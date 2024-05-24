#include <stdio.h>
#include "search_algos.h"

/**
* linear_search - function search for a value
* @array: array to search in
* @size: the size of array
* @value: value search for
* return: return index i, or -1
*/

int linear_search(int *array, size_t size, int value)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]\n",i ,array[i]);
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
}