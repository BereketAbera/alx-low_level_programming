#include "holberton.h"

/**
 * print_line - multiply to numbers
 * @i: the numbers of _ to print
 *
 * Return: returns nothing
 */
void print_line(int i)
{

	while (i > 0)
	{
		_putchar('_');
		i--;
	}
	_putchar('\n');
}

