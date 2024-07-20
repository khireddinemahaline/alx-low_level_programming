#include "search_algos.h"
#include <stdio.h>
/**
* print_array - prit array recursvly
* @array: the array to serch in
* @low: low index
* @high: high index
*/

void print_array(int *array, int low, int high)
{
	int i;

	printf("Searching in array");
	for (i = low; i < high; i++)
		printf("%s %d", (i == low) ? ":" : ",", array[i]);
	printf("\n");
}

/**
* binary_search - binary search algorithm
* @array: the array to serch in
* @size: size of array
* @value: value search for
* Return: -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, low, high, midle;

	low = i;
	high = size - 1;
	if (array == NULL || size == 0)
		return (-1);
	while (low <= high)
	{
		print_array(array, low, high + 1);
		midle = (low + high) / 2;
		if (value < array[midle])
			high = midle - 1;
		else if (value > array[midle])
			low = midle + 1;
		else if (value == array[midle])
			return (midle);
	}
	return (-1);
}
