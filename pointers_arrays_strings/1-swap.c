#include "main.h"

/**
 * swap_int - swaping the values of two intigirs
 * @a: the first variable.
 * @b: the second variables to exchange with the first one.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
