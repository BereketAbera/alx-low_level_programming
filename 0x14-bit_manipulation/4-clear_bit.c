#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - clear bit at index
 * @n: the int value
 * @index: index of required bit
 *
 * Return: the new int value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	mask = 1 << index;
	*n = *n & ~mask;
	return (*n);
}
