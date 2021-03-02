#include <stdlib.h>
/**
 * create_array - create array of values
 * @size: the size of the array
 * @c: the values of the array
 *
 * Return: the pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	array = malloc(size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
