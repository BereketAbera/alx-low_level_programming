#include <stdlib.h>

/**
 * alloc_grid - create a two dimentional array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to the two dimentional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width < 1 || height < 1)
		return (0);

	array = malloc(sizeof(*array) * height);
	for (i = 0; i < width; i++)
		*(array + i) = malloc(sizeof(int) * width);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			*(*(array + i) + j) = 0;
		}
	}
	return (array);
}
