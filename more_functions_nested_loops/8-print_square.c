#include "main.h"

/**
 * print_square - prints a square of # characters, followed by a new line
 *@size: the size of the square (rows, and # per row)
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
			}
}
