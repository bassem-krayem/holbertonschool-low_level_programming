#include "main.h"

/**
 * find_root - Finds the natural square root of a number recursively.
 * @n: The number to find the square root of.
 * @i: The current candidate root to check.
 *
 * Return: The natural square root of 'n', or -1 if 'n' does not have
 * a natural square root.
 */
int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (find_root(n, i + 1));
	return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of 'n', or -1 if 'n' does not have
 * a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_root(n, 1));
}
