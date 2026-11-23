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
 * str_concat - concatenates two strings into newly allocated memory
 * @s1: the first string (NULL is treated as an empty string)
 * @s2: the second string (NULL is treated as an empty string)
 *
 * Return: a pointer to the new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *joined;
	int len1;
	int len2;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = str_len(s1);
	len2 = str_len(s2);
	joined = malloc(sizeof(char) * (len1 + len2 + 1));
	if (joined == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}
