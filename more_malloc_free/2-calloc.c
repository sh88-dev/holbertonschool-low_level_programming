#include "main.h"
#include <stdlib.h>

/**
 * zero_fill - sets every byte of a memory area to 0
 * @mem: the memory area
 * @n: the number of bytes to set
 */
void zero_fill(char *mem, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		mem[i] = 0;
		i++;
	}
}

/**
 * _calloc - allocates memory for an array, with every byte set to 0
 * @nmemb: the number of elements
 * @size: the size of each element, in bytes
 *
 * Return: a pointer to the allocated memory,
 * or NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	zero_fill(mem, nmemb * size);
	return (mem);
}
