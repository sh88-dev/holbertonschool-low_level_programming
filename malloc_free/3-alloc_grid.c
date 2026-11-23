#include "main.h"
#include <stdlib.h>

/**
 * free_rows - frees the first count rows of a grid, then the grid itself
 * @grid: the grid to free
 * @count: how many rows were successfully allocated
 */
void free_rows(int **grid, int count)
{
	int h;

	h = 0;
	while (h < count)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the number of columns
 * @height: the number of rows
 *
 * Return: a pointer to the grid, with every element set to 0,
 * or NULL if width or height is 0 or negative, or on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h;
	int w;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	h = 0;
	while (h < height)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			free_rows(grid, h);
			return (NULL);
		}
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
