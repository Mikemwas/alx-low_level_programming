#include "lists.h"

/**
 * get_nodeint_at_index - yes
 * @head: As name says
 * @index: OF A NODE TO RETURN
 *
 * Return:NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

