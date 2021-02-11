#include "holberton.h"

/**
 * print_triangle - multiply to numbers
 * @i: the numbers the size of the triangle to print
 *
 * Return: returns nothing
 */
void print_triangle(int i)
{
	int k;

	for (k = i - 1; k >= 0; k--)
	{
		int j;

		for (j = 0; j < k; j++)
			_putchar(' ');

		for (j = 0; j < i - k; j++)
			_putchar('#');

		_putchar('\n');
	}
	if (i <= 0)
		_putchar('\n');
}
