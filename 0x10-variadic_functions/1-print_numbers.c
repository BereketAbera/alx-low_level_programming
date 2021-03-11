#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers seprated by a string
 * @separator: string value printed between numbers
 * @n: length of the numbers
 * @...: variable length of numbers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, prs = 0;

	va_start(numbers, n);
	if (separator == NULL)
		prs = 1;

	for (i = 0; i < n; i++)
	{
		if (prs == 0 && i != n - 1)
			printf("%d%s", va_arg(numbers, int), separator);
		else
			printf("%d", va_arg(numbers, int));
	}
	printf("\n");
	va_end(numbers);
}
