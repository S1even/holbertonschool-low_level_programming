#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *separator = "";

	va_start(args, format);
	while (format && format[i])
	{

		if (format[i] == 'c')
		printf("%s%c", separator, va_arg(args, int));
		else if (format[i] == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (format[i] == 'f')
			printf("%s%f", separator, va_arg(args, double));
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);

			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
		}
		else
		{
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
