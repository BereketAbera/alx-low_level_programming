#include <stdio.h>

/**
 * main - prints the alphabets in reverse order
 *
 * Return: return integer value to signify success or failure
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
