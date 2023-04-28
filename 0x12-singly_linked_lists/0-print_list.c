#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - it prints the elements of a linked list
 * @h: it points the list to print
 *
 * Return: how many nodes to be printed
 */
size_t print_list(const list_t *h)
{
 size_t m = 0;

 while (h)

 {
 	if (!h->str)
	 printf("[0] (nil)\n");
 	else
	 printf("[%u] %s\n", h->len, h->str);
	 h = h->next;
	 m++;
 }

 	return (m);
}

