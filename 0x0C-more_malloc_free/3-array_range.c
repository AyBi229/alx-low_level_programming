#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
    if (min > max)
        return NULL;
    
    int minimum = min;
    int length = 0;

    while (minimum != max)
    {
        length++;
        minimum++;
    }
    length++;

    int *ptr = (int *)malloc(sizeof(int) * length);

    if (ptr == NULL)
        return NULL;
    
    int i;

    for (i = 0 ; min <= max ; i++)
    {
        ptr[i] = min++;
    }

    return (ptr);
}
