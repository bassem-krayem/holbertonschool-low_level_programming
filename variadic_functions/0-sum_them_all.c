
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters
 *
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	/* If no parameters, return 0 */
	if (n == 0)
		return (0);

	va_start(args, n);
	/* Iterate through the parameters and sum them up */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum); /* Return the sum */
}
