#include "lists.h"

/**
 * pop_listint - head deletion
 * @head: show first thing in a list t
 *
 * Return: The data inside the elements That was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

