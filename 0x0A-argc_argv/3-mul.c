#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply to numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
