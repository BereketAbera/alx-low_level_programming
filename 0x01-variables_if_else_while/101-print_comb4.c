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
	int e;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			for (e = d + 1; e <= '9'; e++)
			{
				putchar(c);
				putchar(d);
				putchar(e);
				if (c != '7' || d != '8' || e != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
