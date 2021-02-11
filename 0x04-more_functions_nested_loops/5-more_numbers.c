#include "holberton.h"

/**
 * more_numbers - prints from 1 - 14 ten times
 *
 * Return: returns nothing
 */
void more_numbers(void)
{
	int j;
	int i;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
			{
				_putchar('0' + i);
			}
			else
			{
				_putchar('0' + 1);
				_putchar('0' + i % 10);
			}
		}
		_putchar('\n');
	}
}

