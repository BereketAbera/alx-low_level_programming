#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * @i: the numbers of spaces to print
 *
 * Return: returns nothing
 */
void print_diagonal(int i)
{
	int original = i;

	while (i > 0)
	{
		int j;

		for (j = 0; j < original - i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i--;
	}
	if (original <= 0)
		_putchar('\n');
}

