#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the first value (included)
 * @max: the last value (included)
 *
 * Return: a pointer to the new array,
 * or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
