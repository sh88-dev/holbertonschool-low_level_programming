#include "main.h"
#include <stddef.h>

/**
 * is_in - checks if a character appears in a string
 * @c: the character to look for
 * @str: the string to search
 *
 * Return: 1 if c is in str, 0 otherwise
 */
int is_in(char c, char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == c)
			return (1);
		j++;
	}
	return (0);
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the bytes to look for
 *
 * Return: a pointer to the first byte in s that is in accept,
 * or NULL if there is none
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;
	while (s[i] != '\0' && !is_in(s[i], accept))
		i++;
	if (s[i] != '\0')
		return (s + i);
	return (NULL);
}
