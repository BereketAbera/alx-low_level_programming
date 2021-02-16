#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: the required string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		if (l % 2 == 0)
			_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
