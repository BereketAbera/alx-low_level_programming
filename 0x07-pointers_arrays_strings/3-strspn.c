#include "holberton.h"

/**
 * _strspn - find number of charaters not found in accept
 * @s: the pointer to search the charaters from
 * @accept: the accepted characters
 *
 * Return: number of not found characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int count = 0;
	
	while (*(s + i) != '\0'))
	{
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				count++;
			j++;
		}
		i++;
	}
	
	return (count);
}
