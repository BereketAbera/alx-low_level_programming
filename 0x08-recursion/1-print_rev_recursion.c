#include "holberton.h"

/**
 * _print_rev_recursion - prints the value of the
 * string in reverse order recursively
 * @s: the string to print
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
