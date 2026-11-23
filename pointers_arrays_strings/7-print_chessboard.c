#include "main.h"

/**
 * print_row - prints the 8 squares of one row, followed by a new line
 * @row: the row to print
 */
void print_row(char *row)
{
	int col;

	col = 0;
	while (col < 8)
	{
		_putchar(row[col]);
		col++;
	}
	_putchar('\n');
}

/**
 * print_chessboard - prints the chessboard
 * @a: the board, an array of 8 rows of 8 characters
 */
void print_chessboard(char (*a)[8])
{
	int row;

	row = 0;
	while (row < 8)
	{
		print_row(a[row]);
		row++;
	}
}
