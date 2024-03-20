#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: Index of the first element for which cmp function does not return 0,
 * or -1 if no element matches or if size is <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Check for NULL array, NULL cmp function, or non-positive size */
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* Iterate through the array */
	for (i = 0; i < size; i++)
	{
		/* If cmp function returns non-zero value, return index */
		if (cmp(array[i]) != 0)
			return (i);
	}

	/* No match found, return -1 */
	return (-1);
}
