#include "holberton.h"

/**
 * _abs - returns the absolute value of the number 
 * @n: the integer to test
 *
 * Return: integer 1 if value is lower and 0 otherwise
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (n * -1);
}
