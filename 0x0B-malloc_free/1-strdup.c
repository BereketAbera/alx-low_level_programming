#include <stdlib.h>

/**
 * _strdup - copy string
 * @str: original string
 *
 * Return: pointer to the copied string
 */
char *_strdup(char *str)
{
	int l = 0;
	int i;
	char *copy;

	while (str[l] != '\0')
		l++;

	copy = malloc(l);
	if (!copy)
		return (0);

	for (i = 0; i < l; i++)
		copy[i] = str[i];

	return (copy);
}
