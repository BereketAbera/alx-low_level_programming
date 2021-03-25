#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - return number of bet that should be fliped to get from n to m
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (!(n == 0 && m == 0))
	{
		if ((n & 1) != (m & 1))
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
