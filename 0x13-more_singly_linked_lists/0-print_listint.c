#include "lists.h"

/**
 * listint_len - gives out
 * @h:  Listint_t to work on
 *
 * Return: how many nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

