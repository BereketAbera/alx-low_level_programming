#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - print binary value of a number
 * @n: a number in decimal
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if ((n / 2) != 0)
	{
		print_binary(n / 2);
	}
	_putchar('0' + n % 2);
}
