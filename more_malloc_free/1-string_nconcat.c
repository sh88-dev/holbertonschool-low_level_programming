#include "main.h"
#include <stdlib.h>

/**
 * str_len - counts the characters in a string
 * @s: the string to measure
 *
 * Return: the number of characters before the '\0'
 */
unsigned int str_len(char *s)
{
	unsigned int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * string_nconcat - concatenates s1 and the first n bytes of s2
 * @s1: the first string (NULL is treated as an empty string)
 * @s2: the second string (NULL is treated as an empty string)
 * @n: the maximum number of bytes of s2 to use
 *
 * Return: a pointer to the new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *joined;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = str_len(s1);
	len2 = str_len(s2);
	if (n > len2)
		n = len2;
	joined = malloc(sizeof(char) * (len1 + n + 1));
	if (joined == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}
