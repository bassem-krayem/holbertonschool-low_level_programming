#include "lists.h"

/**
 * list_len - return the length of list
 * @h: pointer.
 *
 * Return: length.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}

	return (count);
}
