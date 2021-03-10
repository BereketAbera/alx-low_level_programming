#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculates integer operations
 * @argc: argument count
 * @argv: argiment values array
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	char o;
	int num1, num2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	o = argv[2][0];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (o != '+' && o != '-' && o != '*' && o != '/' && o != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((o == '/' || o == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	op = get_op_func(argv[2]);

	printf("%d\n", op(num1, num2));

	return (0);
}
