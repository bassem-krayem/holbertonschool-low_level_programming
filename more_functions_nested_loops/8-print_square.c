#include "main.h"
/**
 * print_square - prints a square in terminal
 * @size: the size of the square.
 *
 * Return: void.
 */

void print_square(int size)
{
	int l, c;

	if (size <= 0)
		_putchar('\n');
	else

		for (l = 1; l <= size; l++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
