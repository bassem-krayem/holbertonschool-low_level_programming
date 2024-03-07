#include "main.h"
/**
 * _puts_recursion - print a string recursivelly
 * @s: the string that we need it to print .
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);

		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
