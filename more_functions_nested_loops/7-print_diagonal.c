#include "main.h"

/**
 * print_diagonal - prints diagonal in the terminal
 * @n: int of number of times
 * Return: void.
 */

void print_diagonal(int n)
{
	int l, c;

	for (l = 1; l <= n; l++)
	{
		for (c = 1; c < l; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
