#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concat two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of characters to take from the second string
 *
 * Return: a pointer to the new concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int l, i, j;

	l = strlen(s2) > n ? n : strlen(s2);
	new_str = malloc((strlen(s1) + l + 1) * sizeof(*new_str));
	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
		new_str[i] = s1[i];
	for (j = 0; j < l; j++)
		new_str[i + j] = s2[j];

	return (new_str);
}
