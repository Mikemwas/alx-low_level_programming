#include "lists.h"

/**
 * free_listint - releases the link list free
 * @head: listint_t released free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

