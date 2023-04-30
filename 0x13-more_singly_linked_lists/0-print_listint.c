#include "lists.h"

/**
 * print_listint - it printseverything contained in  linked list
 * @h: associated  list of listint_t to print
 *
 * Return: Nodes digits
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

