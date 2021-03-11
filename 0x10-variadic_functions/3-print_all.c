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
	int i = 0, j = 0;
	char *formatchars = "cifs";
	char *printfformats[] = {"%c", "%d", "%f", "%s"};
	void *currValue;

	va_start(values, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (formatchars[j] == format[i] && format[i + 1] == '\0')
			{
				currValue = va_arg(values, void *);
				printf(printfformats[j], currValue);
				break;
			}

			if (formatchars[j] == format[i])
			{
				currValue = va_arg(values, void *);
				printf(printfformats[j], currValue);
				printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(values);
}
