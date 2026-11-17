#include "main.h"

/**
 * _strlen - return sthe length of a string
 * @s: the string to measure
 *
 * Return: the number of characters before the terminating '\0'
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
