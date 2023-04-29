#include <stdlib.h>
#include "lists.h"

/**
 * free_list - let everything go freee now
 *
 * @head: start of a linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

