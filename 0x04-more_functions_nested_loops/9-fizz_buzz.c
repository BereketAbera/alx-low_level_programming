#include "stdio.h"

/**
 * main - print fizz buzz
 *
 * Return: returns 0 or 1 to indicate success or failer
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 15 != 0)
			printf("Fizz");
		else if (i % 5 == 0 && i % 15 != 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

