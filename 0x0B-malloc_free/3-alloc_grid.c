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
		return (NULL);

	array = malloc(sizeof(*array) * width);
	for (i = 0; i < height; i++)
		*(array + i) = malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(array + i) + j) = 0;
		}
	}
	return (array);
}
