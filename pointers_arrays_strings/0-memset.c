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
	return (memset(s, b, n));
}
