#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Description: This function prints numbers followed by a new line. It takes
 *              a separator string to be printed between numbers and the
 *              number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n); /* Initialize 'args' */

	/* Iterate through the 'n' arguments */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int)); /* Print the next integer */

		/* Print the separator if it's not NULL and not the last number */
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n"); /* Print a newline character at the end */

	va_end(args); /* Cleanup */
}
