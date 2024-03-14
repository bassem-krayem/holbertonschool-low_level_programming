#include <stdlib.h> /* for malloc and free */

/**
 * _calloc - allocates memory for an array, initialized to zero
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *ptr;
	unsigned char *byte_ptr;
	unsigned int i;

	/* If nmemb or size is 0, then _calloc returns NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate the total size needed */
	total_size = nmemb * size;

	/* Allocate memory using malloc */
	ptr = malloc(total_size);

	/* If malloc fails, then _calloc returns NULL */
	if (ptr == NULL)
		return (NULL);

	/* Set the allocated memory to zero */
	byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
