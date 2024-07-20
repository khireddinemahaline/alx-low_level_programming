#include "search_algos.h"
#include <stddef.h> 
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using jump search algorithm
 * @array: Pointer to the array to search
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt((double)size);
    size_t start = 0;
    size_t end = step;
    int i;

    if (array == NULL || size == 0)
        return -1;

    printf("Value checked array[%ld] = [%d]\n", start, array[start]);
    if (value >= array[start] && value <= array[end])
        {
            printf("Value found between indexes [%ld] and [%ld]\n", start, end);
        }   
    while (value >= array[end])
    {
        if (end < size)
        {
            printf("Value checked array[%ld] = [%d]\n", end, array[end]);
        }
        start = end ;
        end += step;
        if ((value >= array[start] && value <= array[end] && start <= size) || (start <= size && end > size) )
        {
            printf("Value found between indexes [%ld] and [%ld]\n", start, end);
            break;
        }    
    }
    
    for (i = (int)start; i <= (int)end && i < (int)size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {   
            return i;
        }
    }

    return -1;
}
