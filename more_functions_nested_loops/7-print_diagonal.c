#include "main.h"

/**
 * print_diagonal - prints prints diagonal line whilst int is less than n
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
