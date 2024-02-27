#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal
 * @size: the size of the triangle,
 *
 * Return: void.
 */

void print_triangle(int size)
{
	int l, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (c = 0; c < size; c++)
			{
				if (c < size - l)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
