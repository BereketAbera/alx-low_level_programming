#include "holberton.h"

/**
 * print_most_numbers - print numbers except 2 & 4
 *
 * Return: returns nothing
 */
void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}

