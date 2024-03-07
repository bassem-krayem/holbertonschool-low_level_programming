#include "main.h"

/**
 * _strlen_recursion - get the length of a string
 * @s: the int that will hold the length.
 * Return: the length.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
