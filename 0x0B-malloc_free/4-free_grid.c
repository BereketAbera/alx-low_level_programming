#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free previously allocated space
 * @grid: the pointer to memory location
 * @height: the height of the array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
