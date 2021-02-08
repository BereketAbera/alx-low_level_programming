#include "holberton.h"

/**
 * print_alphabet_x10 - prints all the alphabets in lower letter
 *
 * Retrun: no return value
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		i++;
		_putchar('\n');
	}
}
