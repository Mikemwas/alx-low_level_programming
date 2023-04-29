#include <stdlib.h>
#include "lists.h"

/**
 * list_len - gives out  the number of elements in a linked list
 * @h: showing list_t list
 *
 * Return: details in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

