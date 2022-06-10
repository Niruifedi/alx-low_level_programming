#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data(n) of a dlist
 * @head: head of node
 * Return: 0 on success
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (sum);
	}

	temp = head;
	while(temp != 0)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
