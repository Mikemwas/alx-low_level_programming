#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the contents of a linked list
 * @h: points to the list_t list to be printed
 *
 * Return: Nodes number printed
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

