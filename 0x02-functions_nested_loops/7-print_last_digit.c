#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer to test
 *
 * Return: integer 1 if value is lower and 0 otherwise
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit >= 0)
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
	last_digit *= -1;
	_putchar('0' + last_digit);
	return (last_digit);
}
