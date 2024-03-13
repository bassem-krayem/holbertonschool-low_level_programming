#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alocates momery
 * @b: integer
 * Return: the pointor.
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
