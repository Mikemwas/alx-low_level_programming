#include "lists.h"

/**
 * add_nodeint - adds a New node at the Beginning of a linked list
 * @head: pointer to the First node in The list
 * @n: what data to key in
 *
 * Return: NULL if not working
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

