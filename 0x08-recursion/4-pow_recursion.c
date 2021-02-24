#include "holberton.h"

/**
 * _pow_recursion - return x to the power y recursively
 * @x: the base
 * @y: the exponent
 *
 * Return: x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
