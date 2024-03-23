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

	/* Initialize variable arguments */
	va_start(args, format);

	/* Loop through the format string */
	while (format && format[i])
	{
		/* Get the current format specifier */
		current_format = format[i];
		/* Check the current format specifier and print accordingly */
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
			/* Handle NULL string */
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}

		/* Print separator if not the last element */
		if ((format[i + 1] != '\0') && (current_format == 'c' || current_format == 'i' || current_format == 'f' || current_format == 's'))
			printf(", ");

		i++;
	}

	/* Print newline */
	printf("\n");

	/* Clean up variable arguments */
	va_end(args);
}
