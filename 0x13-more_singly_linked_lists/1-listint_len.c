#include "lists.h"

/**
 * listint_len - GIVES OUT  the number of elements in a linked lists
 * @h: THE type OF listint_t to traverse
 *
 * Return: Number Of Nodes
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

