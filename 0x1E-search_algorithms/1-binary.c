#include "search_algos.h"
#include <stdio.h>
/**
*
*/
int binary_search(int *array, size_t size, int value)
{
    size_t i = 0, low, high, midle;
    low = i;
    high = size - 1;

    if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
    printf("\n");
    while (low <= high)
    {
        midle = (low + high) / 2;
        if (value < array[midle])
        {
            high = midle - 1;
        }
        else if (value > array[midle])
        {
            low = midle + 1;
        }
        else if (value == array[midle])
            return midle;
    }
    return (-1);
}