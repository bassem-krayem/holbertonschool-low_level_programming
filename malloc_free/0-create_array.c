#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: the size of the array.
 * @c: the array that we will take.
 * Return: the pointor.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
