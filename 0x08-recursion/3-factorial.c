#include "holberton.h"

/**
 * factorial - calculates the factorial of the number
 * @n: the number to calculate tha factorial for
 *
 * Return: the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (1);

	return (n * factorial(n - 1));
}
