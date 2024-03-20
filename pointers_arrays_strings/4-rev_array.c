#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to reverse.
 * @n: The number of elements in the array.
 *
 * Return: Nothing (void).
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	/* Swap elements starting from both ends */
	for (i = 0; i < n / 2; i++)
	{
		/* Swap a[i] with a[n - i - 1] */
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
