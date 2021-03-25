#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - convert to base 10
 * @b: a string of binary number
 *
 * Return: the value in base ten
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, intValue = 0, len = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;

	while (len != 0)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '0')
		{
			count++;
			len--;
			continue;
		}

		intValue += _pow(2, count);
		count++;
		len--;
	}

	return (intValue);
}


/**
 * _pow - calculate the power of a number
 * @a: first number
 * @b: second number
 *
 * Return: a to the power of b
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int total = a;

	if (b == 0)
		return (1);
	while (b > 1)
	{
		total *= a;
		b--;
	}

	return (total);
}
