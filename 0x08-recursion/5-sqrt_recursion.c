#include "holberton.h"

int _sqrt_local(int n, int i);

/**
 * _sqrt_recursion - find the square root of a number
 * @n: the number to find the square root for
 *
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_local(n, 1));
}

/**
 * _sqrt_local - calculate sqrt localy
 * @n: the number to find the square root for
 * @i: a temporary variable to find the sqrt
 *
 * Return: the square root value
 */
int _sqrt_local(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (_sqrt_local(n, i + 1));
	}
	return (-1);

}
