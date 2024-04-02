#include "lists.h"

/**
 * print_list - a function that prints  a list
 * @h: pointer of the list.
 *
 * Return: number of the element of the list.
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
