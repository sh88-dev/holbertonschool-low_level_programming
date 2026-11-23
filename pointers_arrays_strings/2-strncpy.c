#include "main.h"

/**
 * _strncpy - copies at most n bytes of a string
 * @dest: the buffer to copy into
 * @src: the string to copy
 * @n: the number of bytes to fill in dest
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
