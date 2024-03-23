#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line
 * @separator: String to be printed between strings
 * @n: Number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	/* Initialize 'args' to point to the first argument after 'n' */
	va_start(args, n);

	/* Iterate through the 'n' arguments */
	for (i = 0; i < n; i++)
	{
		/* Retrieve the next string argument */
		str = va_arg(args, char *);

		/* Print (nil) if string is NULL, otherwise print the string */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/* Print the separator if it's not NULL and not the last string */
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	/* Print a newline character at the end */
	printf("\n");

	/* Clean up the 'args' variable */
	va_end(args);
}
