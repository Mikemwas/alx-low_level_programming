#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - its work it add a new node at the start of a linked list
 * @head: double pointer list_t list
 * @str: New string to be added in the node
 *
 * Return: Address of a new element and or NULL if it doesnt work
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

