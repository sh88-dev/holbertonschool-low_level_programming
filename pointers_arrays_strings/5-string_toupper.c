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
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to change
 *
 * Return: a pointer to the changed string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lower(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
