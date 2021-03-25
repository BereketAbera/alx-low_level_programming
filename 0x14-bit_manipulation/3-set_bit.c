#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - set bit at index
 * @n: the int value
 * @index: index of required bit
 *
 * Return: the new int value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (n == NULL)
		return (-1);
	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
