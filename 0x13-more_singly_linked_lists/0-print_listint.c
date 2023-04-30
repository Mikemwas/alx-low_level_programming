#include "lists.h"

/**
 * print_listint - Prints All the Elements of a Linked list
 * @h: Linked List Of Type Listint_t To Print
 * Return: Number Of Nodes
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


