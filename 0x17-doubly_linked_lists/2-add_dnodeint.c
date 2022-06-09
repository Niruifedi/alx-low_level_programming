#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head to node
 * @n: element of node
 * Return: address of newnode, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}
	(*head) = new;

	return (new);
}
