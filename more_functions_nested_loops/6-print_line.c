#include "main.h"
/**
 * print_line - prints _ in terminal
 *
 * Return (void).
 */

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int line;
		for (line = 0; line < n; line++)
			_putchar('_');
		_putchar('\n');
	}
}
