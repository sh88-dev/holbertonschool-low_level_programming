#include "main.h"

/**
 * is_lower - checks if a character is a lowercase letter
 * @c: the character to check
 *
 * Return: 1 if c is from 'a' to 'z', 0 otherwise
 */
int is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * is_separator - checks if a character separates words
 * @c: the character to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char *seps;
	int i;

	seps = " \t\n,;.!?\"(){}";
	i = 0;
	while (seps[i] != '\0')
	{
		if (c == seps[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to change
 *
 * Return: a pointer to the changed string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lower(str[i]) && (i == 0 || is_separator(str[i - 1])))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
