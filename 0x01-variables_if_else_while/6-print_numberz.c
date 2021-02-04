#include <stdio.h>

/**
 * main - prints the single digit numbers
 *
 * Return: return integer value to signify success or failure
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
