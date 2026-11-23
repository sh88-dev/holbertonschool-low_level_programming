#include "main.h"

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
 * _strspn - gets the length of a prefix substring
 * @s: the string to measure
 * @accept: the bytes allowed in the prefix
 *
 * Return: the number of bytes at the start of s
 * that are all found in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0' && is_in(s[i], accept))
		i++;
	return (i);
}
