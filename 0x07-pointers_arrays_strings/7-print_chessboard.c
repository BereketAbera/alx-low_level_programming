#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard
 *
 * Return: returns nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
