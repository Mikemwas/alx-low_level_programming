#include "lists.h"

/**
 * add_nodeint - additional node
 * @head: points the first node
 * @n: data to be inserted in that new node
 *
 * Return: show nothing if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

