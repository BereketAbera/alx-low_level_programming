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
	int f;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c; d <= '9'; d++)
		{
			for (e = c; e <= '9'; e++)
			{
				for (f = e + 1; f <= '9'; f++)
				{
					putchar(c);
					putchar(d);
					putchar(' ');
					putchar(e);
					putchar(f);
					if (c != '8' || d != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
