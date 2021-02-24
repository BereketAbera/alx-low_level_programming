#include <stdio.h>

/**
 * print_diagsums - print the sume of the two diagonals separatesly
 * @a: the array
 * @size: the length of the array
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 += *(&(*(a + i * size)) + j);
		sum2 += *(&(*(a + i * size)) + (size - 1 - j));
		j++;
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
