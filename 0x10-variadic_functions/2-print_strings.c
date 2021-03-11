#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings seprated by a string
 * @separator: string value printed between strings
 * @n: length of the strings
 * @...: variable length of string
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i, prs = 0;
	char *str;

	va_start(strings, n);
	if (separator == NULL)
		prs = 1;

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			str = "(nil)";
		if (prs == 0 && i != n - 1)
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	printf("\n");
	va_end(strings);
}
