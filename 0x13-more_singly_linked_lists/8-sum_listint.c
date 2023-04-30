#include "lists.h"

/**
 * sum_listint - summation of all data
 * @head: as name says
 *
 * Return: add summation
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

