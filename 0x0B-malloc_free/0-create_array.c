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
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(size * sizeof(char));
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				str[i] = c;
			}
		}
		return (str);
	}
}
