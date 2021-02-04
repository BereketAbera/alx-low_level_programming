#include <stdio.h>

/**
 * main - prints the single digit numbers separated by comman
 *
 * Return: return integer value to signify success or failure
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

