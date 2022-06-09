#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlists
 * @h: head pointer
 * Return: returns the element of a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elem;

	elem = 0;
	if (h == NULL)
	{
		return (elem);
	}
	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
