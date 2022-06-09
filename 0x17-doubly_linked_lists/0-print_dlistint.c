#include "lists.h"

/**
 * print_dlistint - prints out all the elements of a dlist
 * @h: head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t current;

	current = 0;
	if (h == NULL)
	{
		printf("List is empty\n");
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		current++;
		h = h->next;
	}

	return (current);
}
