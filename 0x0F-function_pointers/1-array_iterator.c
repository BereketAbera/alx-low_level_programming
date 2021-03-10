#include <stddef.h>

/**
 * array_iterator - take action on each element of the array
 * @array: the array
 * @size: the size of the array
 * @action: a function to callback on each element
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
		action(*(array + i));
}
