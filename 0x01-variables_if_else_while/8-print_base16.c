#include <stdio.h>

/**
 * main - prints the hex values
 *
 * Return: return integer value to signify success or failure
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}

