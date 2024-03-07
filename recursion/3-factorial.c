#include "main.h"
/**
 * factorial - return the factorial of a number
 * @n: the number.
 * Return: the factorial of the number given.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n *= factorial(n - 1));
}
