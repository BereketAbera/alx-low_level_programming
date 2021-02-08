#include "holberton.h"

/**
 * print_alphabet - prints all the alphabets in lower letter
 *
 * Retrun: no return value
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
