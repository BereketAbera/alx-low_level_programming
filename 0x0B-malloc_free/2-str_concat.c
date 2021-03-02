#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the new concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int l = 0;
	int l2 = 0;
	int total = 0;
	char *s1s2;

	if (s1)
	{
		while (s1[l] != '\0')
		{
			l++;
			total++;
		}
	}
	if (s2)
	{
		while (s2[l2] != '\0')
		{
			l2++;
			total++;
		}
	}
	if (total == 0)
		return (NULL);

	s1s2 = malloc(total);
	if (!s1s2)
		return (NULL);
	for (i = 0; i < l; i++)
		s1s2[i] = s1[i];

	for (j = 0; j < l2; j++)
		s1s2[i + j] = s2[j];

	s1s2[i + j] = '\0';
	return (s1s2);
}
