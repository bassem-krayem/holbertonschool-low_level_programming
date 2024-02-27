#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 10 times
 *
 * Return: void.
 */

void more_numbers(void)
{
	int numbers;
	int times;

	for (times = 0; times <= 10; times++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers > 9)
				_putchar(numbers / 10 + '0');
			_putchar((numbers % 10) + '0');
			_putchar('\n');
		}
	}
}
