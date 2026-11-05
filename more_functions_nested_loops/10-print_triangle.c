#include "main.h"

/**
 * print_repeat - prints the same character a number of times
 * @c: the character to print
 * @count: how many times to print it (0 or less: none)
 */
void print_repeat(char c, int count)
{
	int k;

	k = 0;
	while (k < count)
	{
		_putchar(c);
		k++;
	}
}

/**
 * print_triangle - prints a right-aligned triangle of #
 * @size: the size of the triangle (rows, and # on the last row)
 */
void print_triangle(int size)
{
	int row;

	if (size <= 0)
		_putchar('\n');
	row = 1;
	while (row <= size)
	{
		print_repeat(' ', size - row);
		print_repeat('#', row);
		_putchar('\n');
		row++;
	}
}
