#include "main.h"

/**
 * puts2 - prints every other character of a string, followed by a new line
 * @str: the string to print
 */
void puts2(char *str)
{
	int len;
	int i;

	len = 0;
	while (str[len] != '\0')
		len++;
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
