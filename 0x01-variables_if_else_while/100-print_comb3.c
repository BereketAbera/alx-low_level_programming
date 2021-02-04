#include <stdio.h>

/**
 * main - prints digits from 00 to 99 separated by comman
 *
 * Return: return integer value to signify success or failure
 */
int main(void)
{
	int c;
	int d;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			putchar(c);
			putchar(d);
			if (c != '8' || d != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
