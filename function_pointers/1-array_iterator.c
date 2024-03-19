#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Execute a given function on each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to execute on each element
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
