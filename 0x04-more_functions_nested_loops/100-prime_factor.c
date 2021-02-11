#include <stdio.h>

/**
 * main - print prime number
 *
 * Return: returns 0 or 1 to indicate success or failure
 */
int main(void)
{
	long i = 612852475143;
	long k;
	long gpf = 1;
	long gpf_multi = 1;

	for (k = 2; k <= i / gpf_multi; k++)
	{
		long j;
		long gpf_temp = 1;

		if (i % k == 0)
		{
			for (j = 2; j < k / gpf_temp; j++)
			{
				if (k % j == 0)
				{
					gpf_temp = j;
					break;
				}
			}
			if (gpf_temp == 1)
			{
				gpf = k;
				gpf_multi *= k;
			}
		}
	}
	printf("%ld\n", gpf);
	return (0);
}
