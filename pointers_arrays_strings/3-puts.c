#include "main.h"
/**
 * puts - prints a string
 * @s: the the variable that we are going to print in
 *
 * Return: void;
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
