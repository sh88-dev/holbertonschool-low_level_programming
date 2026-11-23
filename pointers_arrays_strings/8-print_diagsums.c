#include "main.h"
#include <stdio.h>

/**
 * sum_main_diag - adds the numbers on the top-left to bottom-right diagonal
 * @a: the matrix, stored as one flat block of size * size ints
 * @size: the number of rows (and columns)
 *
 * Return: the sum of the main diagonal
 */
int sum_main_diag(int *a, int size)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum = sum + a[i * size + i];
		i++;
	}
	return (sum);
}

/**
 * sum_anti_diag - adds the numbers on the top-right to bottom-left diagonal
 * @a: the matrix, stored as one flat block of size * size ints
 * @size: the number of rows (and columns)
 *
 * Return: the sum of the anti-diagonal
 */
int sum_anti_diag(int *a, int size)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum = sum + a[i * size + (size - 1 - i)];
		i++;
	}
	return (sum);
}

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: the matrix, stored as one flat block of size * size ints
 * @size: the number of rows (and columns)
 */
void print_diagsums(int *a, int size)
{
	printf("%d, %d\n", sum_main_diag(a, size), sum_anti_diag(a, size));
}
