#include "main.h"
#include <stddef.h>

/**
 * starts_with - checks if a string begins with a given prefix
 * @s: the string to check
 * @prefix: the characters that must appear at the start of s
 *
 * Return: 1 if s starts with prefix, 0 otherwise
 */
int starts_with(char *s, char *prefix)
{
	int j;

	j = 0;
	while (prefix[j] != '\0')
	{
		if (s[j] != prefix[j])
			return (0);
		j++;
	}
	return (1);
}

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while (haystack[i] != '\0')
	{
		if (starts_with(haystack + i, needle))
			return (haystack + i);
		i++;
	}
	if (needle[0] == '\0')
		return (haystack + i);
	return (NULL);
}
