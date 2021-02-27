#include <stdio.h>

/**
 * main - print number or arguments
 * @argc: argument count
 * @argv: argument array
 *
 * Return: always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
