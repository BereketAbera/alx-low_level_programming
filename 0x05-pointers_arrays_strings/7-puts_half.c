#include "holberton.h"

/**
 * puts_half - prints the second half of the string
 * @str: the required string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int l = 0;
	int half;
	int printIndex;

	while (str[l] != '\0')
		l++;
	half = l % 2 == 0 ? l / 2 : l / 2 + 1;
	printIndex = half;
	while (l > half)
	{
		_putchar(str[printIndex]);
		l--;
		printIndex++;
	}
	_putchar('\n');
}
