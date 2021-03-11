#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print any type of variable values
 * @format: format of the given printable values
 * @...: varialbe length of values
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list values;
	int i = 0, j = 0, valid = 0;
	char *formatchars = "cifs";
	char *printfformats[] = {"%c", "%d", "%f", "%s"};
	void *currValue;

	va_start(values, format);
	while (format[i] != '\0')
	{
		valid = 0;
		j = 0;
		while (j < 4)
		{
			if (formatchars[j] == format[i])
			{
				valid = 1;
				currValue = va_arg(values, void *);
				break;
			}
			j++;
		}
		if (valid == 1 && format[i + 1] != '\0' && (currValue != NULL || currValue == 0))
		{
			printf(printfformats[j], currValue);
			printf(", ");
		} else if (valid == 1 && (currValue != NULL || currValue == 0))
			printf(printfformats[j], currValue);
		else if (valid == 1 && format[i + 1] != '\0')
		{
			printf(printfformats[j], "(nil)");
			printf(", ");
		} else if (valid == 1)
			printf(printfformats[j], "(nil)");
		i++;
	}
	printf("\n");
	va_end(values);
}
