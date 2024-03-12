#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to be appended to dest
 * @n: The maximum number of bytes to be used from src
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Move the pointer to the end of the destination string */
	while (*ptr)
		ptr++;

	/* Append at most n bytes from the src string to the end of dest */
	while (*src && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* Add a terminating null byte */
	*ptr = '\0';

	return (dest);
}
