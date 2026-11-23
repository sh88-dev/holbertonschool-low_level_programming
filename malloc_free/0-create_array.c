#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and fills it with one char
 * @size: the number of chars in the array
 * @c: the char to fill the array with
 *
 * Return: a pointer to the array, or NULL if size is 0 or malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
