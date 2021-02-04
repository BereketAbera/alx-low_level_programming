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
		for (d = '0'; d <= '9'; d++)
		{
			for (e = d + 1; e <= '9'; e++)
			{
				for (f = d + 1; f <= '9'; f++)
				{
					putchar(c);
					putchar(d);
					putchar(' ');
					putchar(e);
					putchar(f);
					if (c != '9' || d != '8' || e != '9' || f != '9')
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
