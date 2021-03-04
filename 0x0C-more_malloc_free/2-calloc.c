#include <stdlib.h>

/**
 * _calloc - allocate memory for array
 * @nmemb: number or elements
 * @size: element size
 *
 * Return: return a pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int t_size, i;

	t_size = nmemb * size;
	if (t_size == 0)
		return (NULL);

	mem = malloc(t_size);
	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}
	for (i = 0; i < t_size; i++)
		mem[i] = 0;

	return (mem);
}
