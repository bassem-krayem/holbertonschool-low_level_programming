#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: Format string indicating the types of arguments passed
 */
void print_all(const char *const format, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;
	char current_format;

	va_start(args, format);
	while (format && format[i])
	{
		current_format = format[i];
		switch (current_format)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		if ((format[i + 1] != '\0') && (current_format == 'c' ||
										current_format == 'i' || current_format == 'f' ||
										current_format == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
