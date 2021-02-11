#include "holberton.h"

/**
 * print_square - multiply to numbers
 * @i: the numbers the size of the square to print
 *
 * Return: returns nothing
 */
void print_square(int i)
{
	int original = i;

	while (i > 0)
	{
		int j;

		for (j = 0; j < original; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i--;
	}
	if (original <= 0)
		_putchar('\n');
}
