#include "main.h"
#include <stdlib.h>

/**
 * str_len - counts the characters in a string
 * @s: the string to measure
 *
 * Return: the number of characters before the '\0'
 */
int str_len(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: the string to copy
 *
 * Return: a pointer to the copy, or NULL if str is NULL
 * or there is not enough memory
 */
char *_strdup(char *str)
{
	char *copy;
	int len;
	int i;

	if (str == NULL)
		return (NULL);
	len = str_len(str);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
