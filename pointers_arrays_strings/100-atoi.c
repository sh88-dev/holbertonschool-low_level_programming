#include "main.h"

/**
 * is_digit - checks if a character is a digit from '0' to '9'
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer, or 0 if there are no digits
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (s[i] != '\0' && !is_digit(s[i]))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while (is_digit(s[i]))
	{
		result = result * 10 - (s[i] - '0');
		i++;
	}
	if (sign == 1)
		result = -result;
	return (result);
}
