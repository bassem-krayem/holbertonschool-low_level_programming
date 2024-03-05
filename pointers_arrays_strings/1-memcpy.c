#include "main.h"
/**
 * *_memcpy - copy a memory area from src to destination
 * @dest: the destination.
 * @src: the source from where i will take the copy.
 * @n: the number.
 * Return: s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
