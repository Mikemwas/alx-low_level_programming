#include "lists.h"

/**
 * print_listint - conntents of a linked list
 * @h:type of list
 *
 * Return: how many nodea
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

