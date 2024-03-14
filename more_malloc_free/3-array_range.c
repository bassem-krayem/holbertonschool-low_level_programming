#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;	 /* Pointer to the newly created array */
	int size, i; /* Variables for size of array and loop counter */

	/* If min is greater than max, return NULL */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	array = malloc(sizeof(int) * size);

	/* Check if memory allocation was successful */
	if (array == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		/* Assign current value of min to array element and increment min */
		array[i] = min++;
	}

	/* Return pointer to the newly created array */
	return (array);
}
