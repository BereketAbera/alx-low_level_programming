#include <stdio.h>

/**
 * print_array - prints n elements of the array
 * @a: the array to be printed
 * @n: number of elements to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int l = 0;

	while (a[l] != '\0' && l < n)
	{
		printf("%d", a[l]);
		if (l != n - 1)
			printf(", ");
		l++;
	}
	printf("\n");
}
