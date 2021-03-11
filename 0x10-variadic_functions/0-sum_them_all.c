#include <stdarg.h>

/**
 * sum_them_all - sum all input numbers
 * @n: number of variable arguments
 * @...: variable arguments
 *
 * Return: sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);
	return (sum);
}
