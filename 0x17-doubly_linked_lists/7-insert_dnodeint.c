#include "lists.h"

/**
 * insert_dnode_at_index - adds node at index
 * @h: pointer to head node
 * @idx: index of nodes
 * @n: elements of nodes
 * Return: address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp, *new, *temp_prev;

	if (h == NULL && idx > 0)
	return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = new->next = NULL;

	if (idx == 0)
	{
		if (*h)
	{
		new->next = *h;
		(*h)->prev = new, *h = new;
	}
		else
			*h = new;
		return (new);
	}
	i = 1, temp = (*h)->next;
	while (temp)
	{
		if (idx == i)
		{
			temp->prev->next = new, new->prev = temp->prev;
			new->next = temp, temp->prev = new;
			return (new);
		}
		i++;
		temp_prev = temp;
		temp = temp->next;
	}
	if (temp == NULL && i == idx)
	{
		temp_prev->next = new, new->prev = temp_prev;
		return (new);
	}
	free(new);
	return (NULL);
}
