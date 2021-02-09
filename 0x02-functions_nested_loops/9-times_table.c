#include "holberton.h"

/**
 * times_table - prints the 9 times talbe
 *
 * Return: returns nothing
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j <= 9)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (j == 0 && i != 0)
					_putchar('\n');
				_putchar('0' + i * j);
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			}
		}
	}
	_putchar('\n');
}
