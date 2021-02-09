#include "holberton.h"

/**
 * print_sign - print the sign of an integer
 * @n: the integer to test
 *
 * Return: integer 1 if value is lower and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
