#include <stdio.h>
#include "lists.h"

/**
 * print_list - this should print every  element of a Linked List
 * @h: points the list_t list
 *
 * Return: how many nodes to be printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}

