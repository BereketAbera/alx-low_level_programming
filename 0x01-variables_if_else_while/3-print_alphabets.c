#include <stdio.h>

/**
 * main - prints the alphabets
 *
 * Return: return integer value to signify success or failure
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}

