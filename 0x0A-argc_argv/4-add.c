#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print sum of arguments
 * @argc: argument count
 * @argv: argument array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int notnumbers = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			notnumbers = 1;
			break;
		}
		sum += atoi(argv[i]);
	}
	if (notnumbers)
		printf("Error\n");
	else
		printf("%d\n", sum);
	return (0);
}
