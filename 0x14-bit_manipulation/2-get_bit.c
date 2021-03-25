#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - get bit at index
 * @n: the int value
 * @index: index of required bit
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i, mask;

	mask = 1 << index;
	i = (n & mask) != 0;
	return (i);
}
