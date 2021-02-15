#include "holberton.h"

/**
 * print_rev - prints the given string in reverse order to stdout
 * @str: the required string
 *
 * Return: nothing
 */
void print_rev(char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;

	while (l >= 0)
	{
		_putchar(str[l]);
		l--;
	}
	_putchar('\n');
}
