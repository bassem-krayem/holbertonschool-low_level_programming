#include "main.h"
#include <stddef.h>

/**
 * *_memset - function for falls
 * @s: string.
 * @b: the character
 * @n: the intigir
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
