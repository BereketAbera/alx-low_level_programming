#include "holberton.h"

int _prime_local(int n, int i);

/**
 * is_prime_number - check if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	return (_prime_local(n, 2));
}

/**
 * _prime_local - calculate prime localy
 * @n: the number to check for prime
 * @i: a temporary variable to find the prime
 *
 * Return: 1 if prime 0 otherwise
 */
int _prime_local(int n, int i)
{
	if (n < i)
		return (0);

	if (n % i != 0 && n / 2 < i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (_prime_local(n, i + 1));

}
